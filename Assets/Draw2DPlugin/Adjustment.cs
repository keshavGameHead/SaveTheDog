using System;
using UnityEngine;

[ExecuteInEditMode]
public class Adjustment : MonoBehaviour
{
	[Header("主球的物理性质"), Range(0f, 100f)]
	public float characterFriction;

	[Range(0f, 100f)]
	public float characterBounciness;

	[Header("主球的大小"), Range(0f, 10f)]
	public float characterScale;

	[Header("主球的质量"), Range(0f, 10f)]
	public float characterMass;

	[Header("目标球的物理性质"), Range(0f, 100f)]
	public float targetFriction;

	[Range(0f, 100f)]
	public float targetBounciness;

	[Header("目标球的大小"), Range(0f, 10f)]
	public float targetScale;

	[Header("绿色障碍的物理性质"), Range(0f, 100f)]
	public float greenObstacleFriction;

	[Range(0f, 100f)]
	public float greenObstacleBounciness;

	[Header("黄色障碍的物理性质"), Range(0f, 100f)]
	public float yellowObstacleFriction;

	[Range(0f, 100f)]
	public float yellowObstacleBounciness;

	[Header("黄色障碍质量系数"), Range(0f, 50f)]
	public float yellowObstacleMass;

	[Header("黄色障碍旋转摩擦系数"), Range(0f, 50f)]
	public float yellowAngularDrag;

	[Header("画线的物理性质"), Range(0f, 100f)]
	public float lineFriction;

	[Range(0f, 100f)]
	public float lineBounciness;

	[Header("画线的粗细"), Range(0f, 5f)]
	public float lineThickness;

	[Header("画线的质量"), Range(0f, 10f)]
	public float lineMass;

	[Header("非操作区域"), Space(20f)]
	public PhysicsMaterial2D characterPhysicsMaterial2D;

	public PhysicsMaterial2D targetPhysicsMaterial2D;

	public PhysicsMaterial2D greenObstaclePhysicsMaterial2D;

	public PhysicsMaterial2D yellowObstaclePhysicsMaterial2D;

	public PhysicsMaterial2D linePhysicsMaterial2D;

	public DrawingManager drawingManager;

	public static Adjustment instance;

	private void Awake()
	{
		Adjustment.instance = this;
	}

	private void Start()
	{
		this.setConfigure();
	}

	private void Update()
	{
		if (Application.isEditor)
		{
			this.setConfigure();
		}
	}

	private void setConfigure()
	{
		this.characterPhysicsMaterial2D.friction = this.characterFriction;
		this.characterPhysicsMaterial2D.bounciness = this.characterBounciness;
		this.targetPhysicsMaterial2D.friction = this.targetFriction;
		this.targetPhysicsMaterial2D.bounciness = this.targetBounciness;
		this.greenObstaclePhysicsMaterial2D.friction = this.greenObstacleFriction;
		this.greenObstaclePhysicsMaterial2D.bounciness = this.greenObstacleBounciness;
		this.yellowObstaclePhysicsMaterial2D.friction = this.yellowObstacleFriction;
		this.yellowObstaclePhysicsMaterial2D.bounciness = this.yellowObstacleBounciness;
		this.linePhysicsMaterial2D.friction = this.lineFriction;
		this.linePhysicsMaterial2D.bounciness = this.lineBounciness;
		this.drawingManager.widthStart = this.lineThickness;
		this.drawingManager.widthEnd = this.lineThickness;
		this.drawingManager.massScale = this.lineMass;
	}
}
