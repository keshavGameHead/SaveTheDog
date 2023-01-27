using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DrawingManager : MonoBehaviour
{
	private LineRenderer pathLineRenderer;

	private EdgeCollider2D pathEdgeCollider;

	private PolygonCollider2D pathPolygonCollider;

	private Rigidbody2D pathRigidbody;

	private Color c1;

	private Color c2;

	private int posCount;

	private float destroyCounter;

	public static int cloneNumber;

	private float colliderAngle;

	public List<Vector2> newVerticies = new List<Vector2>();

	private List<Vector2> newVerticies2 = new List<Vector2>();

	private List<Vector2> newVerticies_ = new List<Vector2>();

	public GameObject path;

	public GameObject massCenter;

	//[HideInInspector]
	public GameObject mousePointer;

	private GameObject massCenterClone;

	private GameObject clone;

	[HideInInspector]
	public Vector2 centerOfMass = Vector2.zero;

	private int centerOfMassCount;

	private RaycastHit2D hit;

	private RaycastHit2D mouseRay;

	public LayerMask layerMask;

	private bool mouseHit;

	private bool canDraw = true;

	[Header("Line Settings")]
	public Color colorStart;

	public Color colorEnd;

	public PhysicsMaterial2D material;

	[Range(0f, 10f)]
	public float widthStart;

	[Range(0f, 10f)]
	public float widthEnd;

	[Range(0f, 5f)]
	public float verticesDistance;

	public bool fixedPosition;

	public bool isPermanent;

	public float lifeTime;

	public ColliderTypeChoices colliderType;

	public bool showMassCenter;

	public int massCenterPrecision;

	public bool dynamicMass;

	[Range(0f, 10f)]
	public float massScale;

	[Range(-10f, 10f)]
	public float gravityScale;

	public bool freezeWhileDrawing;

	public LineRenderer blockLine;

	[Header("Ex.: Wall,Groung,RedArea"), Header("Tags divided by comma ',' where you can't draw.")]
	public string tagCantDraw = string.Empty;

	private string[] tagsCantdraw = new string[0];

	public Material lineMaterial;

	public GameObject pointPrefab;

	private bool prepareDrawFinish;

	private Vector2 touchDownPosition;

	private bool isBeginDrawOnTouch;

	private void Start()
	{
		Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("OnDraw"), LayerMask.NameToLayer("OnDraw"));
		this.mousePointer = GameObject.Find("MousePointer");
		DrawingManager.cloneNumber = 0;
		this.colorStart = Color.gray;
		this.colorEnd = Color.gray;
		this.verticesDistance = 0.1f;
		this.lifeTime = 2f;
		this.colliderType = ColliderTypeChoices.Polygon_Collider;
		this.isPermanent = true;
		this.fixedPosition = false;
		this.showMassCenter = false;
		this.massCenterPrecision = 100;
		this.dynamicMass = true;
		this.gravityScale = 1f;
		this.freezeWhileDrawing = false;
		this.tagsCantdraw = this.tagCantDraw.Split(new char[]
		{
			','
		});
		this.pathLineRenderer = this.path.GetComponent<LineRenderer>();
		this.pathLineRenderer.useWorldSpace = false;
		this.pathLineRenderer.material = this.lineMaterial;
		this.posCount = 0;
	}

	private void FixedUpdate()
	{
		this.mousePointer.GetComponent<TargetJoint2D>().target = Camera.main.ScreenToWorldPoint(this.getTouchPosition());
	}

	private void initCanDraw()
	{
		if (this.mouseRay.collider != null)
		{
			this.canDraw = false;
		}
		if (EventSystem.current.IsPointerOverGameObject(0))
		{
			this.canDraw = false;
		}
	}

	public void setBlockLine(Vector3 begin, Vector3 end)
	{
		begin.z = (end.z = this.blockLine.GetPosition(0).z);
		this.blockLine.SetPosition(0, begin);
		this.blockLine.SetPosition(1, end);
	}

	private void prepareDraw()
	{
		this.mousePointer.transform.position = Camera.main.ScreenToWorldPoint(this.getTouchPosition());
		this.mousePointer.GetComponent<CircleCollider2D>().isTrigger = true;
		this.mousePointer.transform.localScale = new Vector3(this.widthEnd, this.widthEnd, this.widthEnd);
		this.StarPrefab();
		this.centerOfMassCount = 0;
		this.centerOfMass = Vector2.zero;
		this.prepareDrawFinish = true;
	}

	private void drawing()
	{
		if (this.hit.collider != null && !this.hit.collider.isTrigger)
		{
			this.mouseHit = true;
		}
		else
		{
			this.mouseHit = false;
		}
		this.DrawVisibleLine();
	}

	private void initDrawWhenTouch()
	{
		this.newVerticies.Clear();
		this.newVerticies.Add(Vector3.zero);
		this.mousePointer.transform.position = Camera.main.ScreenToWorldPoint(this.getTouchPosition());
		this.touchDownPosition = this.mousePointer.transform.position;
	}

	private void onTouchDown()
	{
		FreezeMoving.freeze = true;
		this.prepareDrawFinish = false;
		this.newVerticies.Clear();
		this.canDraw = true;
		this.isBeginDrawOnTouch = false;
		this.initCanDraw();
		if (this.canDraw)
		{
			this.initDrawWhenTouch();
		}
	}

	private void onTouchMove()
	{
		if (!this.prepareDrawFinish)
		{
			this.canDraw = true;
			this.initCanDraw();
		}
		if (this.canDraw)
		{
			if (this.isBeginDrawOnTouch)
			{
				this.drawing();
			}
			else
			{
				Vector2 a = Camera.main.ScreenToWorldPoint(this.getTouchPosition());
				if (Vector2.Distance(a, this.touchDownPosition) > 0.05f && !this.prepareDrawFinish)
				{
					this.isBeginDrawOnTouch = true;
					this.prepareDraw();
				}
			}
		}
	}

	private void onTouchUp()
	{
		FreezeMoving.freeze = false;
		this.setBlockLineVisiable(false);
		if (this.canDraw)
		{
			if (!this.isBeginDrawOnTouch)
			{
				Vector3 position = Camera.main.ScreenToWorldPoint(this.getTouchPosition());
				position.z = 0f;
				this.makeAPoint(position);
				return;
			}
			this.mousePointer.GetComponent<CircleCollider2D>().isTrigger = true;
			this.makeLinePhysics();
			this.clone.layer = LayerMask.NameToLayer("Drawing");
			this.posCount = 0;
			if (this.newVerticies.Count <= 2 || (this.widthStart == 0f && this.widthEnd == 0f))
			{
				DrawingManager.cloneNumber--;
				UnityEngine.Object.Destroy(this.clone);
				Vector3 position2 = this.mousePointer.transform.position;
				position2.z = 0f;
				this.makeAPoint(position2);
			}
		}
		FreezeMoving.freeze = false;
		if (!this.fixedPosition && this.clone)
		{
			this.clone.gameObject.AddComponent<FreezeMoving>();
		}
		else if (this.pathRigidbody)
		{
			this.pathRigidbody.bodyType = RigidbodyType2D.Static;
		}

		gameObject.SetActive(false);
	}

	private void makeLinePhysics()
	{
		this.pathPolygonCollider.isTrigger = false;
		if (this.colliderType == ColliderTypeChoices.Edge_Collider)
		{
			this.newVerticies.Add(this.mousePointer.transform.position - this.clone.transform.position);
		}
		else
		{
			this.newVerticies2.Clear();
			this.newVerticies.Add(this.mousePointer.transform.position - this.clone.transform.position);
			for (int i = 0; i < this.newVerticies.Count - 1; i++)
			{
				if (i < this.newVerticies.Count - 2)
				{
					this.colliderAngle = Mathf.Atan2(this.newVerticies[i].y - this.newVerticies[i + 1].y, this.newVerticies[i].x - this.newVerticies[i + 1].x);
					this.colliderAngle += 1.57079637f;
				}
				float num = Mathf.Cos(this.colliderAngle);
				float num2 = Mathf.Sin(this.colliderAngle);
				float num3 = Mathf.Lerp(this.widthStart, this.widthEnd, (float)i / (float)(this.newVerticies.Count - 2));
				this.newVerticies2.Add(new Vector2(this.newVerticies[i].x + num3 / 2f * num, this.newVerticies[i].y + num3 / 2f * num2));
				this.newVerticies2.Insert(0, new Vector2(this.newVerticies[i].x - num3 / 2f * num, this.newVerticies[i].y - num3 / 2f * num2));
			}
			this.pathPolygonCollider.SetPath(0, this.newVerticies2.ToArray());
			this.pathPolygonCollider.sharedMaterial = this.material;
		}
		this.CalculatesPrevCenterOfMassAndMass((float)(this.newVerticies.Count - 1));
		if (this.dynamicMass)
		{
			this.pathRigidbody.mass *= this.massScale;
		}
		else
		{
			this.pathRigidbody.mass = this.massScale;
		}
		this.centerOfMass /= (float)this.centerOfMassCount;
		if (this.newVerticies.Count > 2 && (this.widthStart != 0f || this.widthEnd != 0f))
		{
			this.pathRigidbody.centerOfMass = this.centerOfMass;
		}
		if (this.showMassCenter)
		{
			this.massCenterClone = UnityEngine.Object.Instantiate<GameObject>(this.massCenter, base.transform.position, Quaternion.identity);
			this.massCenterClone.transform.parent = this.pathRigidbody.transform;
			this.massCenterClone.transform.position = this.centerOfMass;
		}
		this.pathRigidbody.bodyType = RigidbodyType2D.Dynamic;
	}

	private void Update()
	{
		EventSystem current = EventSystem.current;
		if (current != null && current.IsPointerOverGameObject())
		{
			return;
		}
		this.hit = Physics2D.Raycast(this.mousePointer.transform.position, Vector2.zero, float.PositiveInfinity, this.layerMask);
		this.mouseRay = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(this.getTouchPosition()), Vector2.zero, float.PositiveInfinity, this.layerMask);
		if (this.fixGetMouseButtonDown())
		{
			this.onTouchDown();
		}
		if (this.fixGetMouseButton())
		{
			this.onTouchMove();
		}
		if (this.fixGetMouseButtonUp())
		{
			this.onTouchUp();
		}
	}

	private void makeAPoint(Vector3 position)
	{
		GameObject gameObject = UnityEngine.Object.Instantiate<GameObject>(this.pointPrefab);
		gameObject.transform.position = position;
		gameObject.GetComponent<SpriteRenderer>().color = this.colorStart;
		Rigidbody2D component = gameObject.GetComponent<Rigidbody2D>();
		component.useAutoMass = true;
		float mass = component.mass;
		component.useAutoMass = false;
		component.mass = mass * Adjustment.instance.lineMass;
		gameObject.GetComponent<Collider2D>().sharedMaterial = this.material;
	}

	private void StarPrefab()
	{
		this.clone = UnityEngine.Object.Instantiate<GameObject>(this.path, this.mousePointer.transform.position, Quaternion.identity);
		this.clone.name = "Drawing" + DrawingManager.cloneNumber;
		DrawingManager.cloneNumber++;
		this.pathLineRenderer = this.clone.GetComponent<LineRenderer>();
		this.pathRigidbody = this.clone.GetComponent<Rigidbody2D>();
		this.pathRigidbody.bodyType = RigidbodyType2D.Kinematic;
		this.pathRigidbody.gravityScale = this.gravityScale;
		this.clone.transform.position = Vector3.zero;
		this.clone.transform.rotation = Quaternion.identity;
		this.pathRigidbody.centerOfMass = Vector2.zero;
		this.pathLineRenderer.SetColors(this.colorStart, this.colorEnd);
		this.pathLineRenderer.SetWidth(this.widthStart, this.widthEnd);
		this.newVerticies.Clear();
		this.newVerticies_.Clear();
		this.newVerticies2.Clear();
		this.pathLineRenderer.SetVertexCount(1);
		this.pathLineRenderer.SetPosition(0, this.mousePointer.transform.position - new Vector3(0f, 0f, Camera.main.transform.position.z));
		this.newVerticies.Add(this.mousePointer.transform.position - this.clone.transform.position);
		this.newVerticies_.Add(this.mousePointer.transform.position - this.clone.transform.position);
		if (this.colliderType == ColliderTypeChoices.Edge_Collider)
		{
			UnityEngine.Object.Destroy(this.clone.GetComponent<PolygonCollider2D>());
			this.pathEdgeCollider = this.clone.GetComponent<EdgeCollider2D>();
		}
		else
		{
			UnityEngine.Object.Destroy(this.clone.GetComponent<EdgeCollider2D>());
			this.pathPolygonCollider = this.clone.GetComponent<PolygonCollider2D>();
			this.pathPolygonCollider.SetPath(0, this.newVerticies2.ToArray());
		}
		this.pathPolygonCollider.isTrigger = true;
	}

	private void DrawVisibleLine()
	{
		if (Vector2.Distance(this.mousePointer.transform.position, this.newVerticies_[this.posCount]) > this.verticesDistance)
		{
			if (this.canPassWhenDraw(this.newVerticies[this.newVerticies.Count - 1], this.mousePointer.transform.position))
			{
				this.setBlockLineVisiable(false);
				this.posCount++;
				this.pathLineRenderer.SetVertexCount(this.posCount + 1);
				this.pathLineRenderer.SetPosition(this.posCount, this.mousePointer.transform.position - new Vector3(0f, 0f, Camera.main.transform.position.z));
				this.newVerticies_.Add(this.mousePointer.transform.position - this.clone.transform.position);
				this.newVerticies.Add(this.mousePointer.transform.position - this.clone.transform.position);
				if (this.colliderType == ColliderTypeChoices.Edge_Collider)
				{
					if (this.newVerticies.Count > 2)
					{
						this.pathEdgeCollider.points = this.newVerticies.ToArray();
					}
					this.pathEdgeCollider.sharedMaterial = this.material;
				}
				else
				{
					this.newVerticies2.Clear();
					this.newVerticies.Add(this.mousePointer.transform.position - this.clone.transform.position);
					for (int i = 0; i < this.newVerticies.Count - 1; i++)
					{
						this.colliderAngle = Mathf.Atan2(this.newVerticies[i].y - this.newVerticies[i + 1].y, this.newVerticies[i].x - this.newVerticies[i + 1].x);
						this.colliderAngle += 1.57079637f;
						float num = Mathf.Cos(this.colliderAngle);
						float num2 = Mathf.Sin(this.colliderAngle);
						float num3 = Mathf.Lerp(this.widthStart, this.widthEnd, (float)i / (float)(this.newVerticies.Count - 2));
						this.newVerticies2.Add(new Vector2(this.newVerticies[i].x + num3 / 2f * num, this.newVerticies[i].y + num3 / 2f * num2));
						this.newVerticies2.Insert(0, new Vector2(this.newVerticies[i].x - num3 / 2f * num, this.newVerticies[i].y - num3 / 2f * num2));
					}
					this.newVerticies.RemoveAt(this.newVerticies.Count - 1);
					this.pathPolygonCollider.SetPath(0, this.newVerticies2.ToArray());
					this.pathPolygonCollider.sharedMaterial = this.material;
				}
			}
			else
			{
				this.setBlockLine(this.newVerticies[this.newVerticies.Count - 1], Camera.main.ScreenToWorldPoint(this.getTouchPosition()));
			}
		}
	}

	private void CalculatesPrevCenterOfMassAndMass(float width)
	{
		int num = 0;
		while ((float)num <= width - 2f)
		{
			float num2 = Vector2.Distance(this.newVerticies[num], this.newVerticies[num + 1]) * (float)this.massCenterPrecision;
			int num3 = 0;
			while ((float)num3 <= num2)
			{
				this.centerOfMass += Vector2.Lerp(this.newVerticies[num], this.newVerticies[num + 1], 0.5f);
				this.centerOfMassCount++;
				num3++;
			}
			num++;
		}
		if (this.dynamicMass && this.newVerticies.Count > 2)
		{
			this.pathRigidbody.mass += width;
		}
	}

	private bool fixGetMouseButtonDown()
	{
        //return UnityEngine.Input.touchCount > 0 && UnityEngine.Input.GetTouch(0).phase == TouchPhase.Began;
        return Input.GetMouseButtonDown(0);
	}

	private bool fixGetMouseButton()
	{
        //return UnityEngine.Input.touchCount > 0 && (UnityEngine.Input.GetTouch(0).phase == TouchPhase.Stationary || UnityEngine.Input.GetTouch(0).phase == TouchPhase.Moved);
        return Input.GetMouseButton(0);
    }

	private bool fixGetMouseButtonUp()
	{
		//return UnityEngine.Input.touchCount > 0 && UnityEngine.Input.GetTouch(0).phase == TouchPhase.Ended;
        return Input.GetMouseButtonUp(0);
    }

	private bool isClickOnUI()
	{
		return EventSystem.current.IsPointerOverGameObject();
	}

	private Vector3 getTouchPosition()
	{
        //return UnityEngine.Input.GetTouch(0).position;
        return Input.mousePosition;
	}

	public bool canPassWhenDraw(Vector2 begin, Vector2 end)
	{
		if (!this.blockLine.gameObject.active)
		{
			this.blockLine.gameObject.SetActive(true);
		}
		RaycastHit2D[] array = Physics2D.RaycastAll(begin, end - begin, Vector2.Distance(begin, end));
		if (array.Length > 0)
		{
			RaycastHit2D[] array2 = array;
			for (int i = 0; i < array2.Length; i++)
			{
				RaycastHit2D raycastHit2D = array2[i];
				if (!(raycastHit2D.collider.gameObject == this.mousePointer))
				{
					if (!raycastHit2D.collider.gameObject.name.Contains("Drawing"))
					{
						if (!(raycastHit2D.collider.gameObject.GetComponent<Target>() != null))
						{
							return false;
						}
					}
				}
			}
		}
		return true;
	}

	public void setBlockLineVisiable(bool visiable)
	{
		this.blockLine.gameObject.SetActive(visiable);
	}
}
