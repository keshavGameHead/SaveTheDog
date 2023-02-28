using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeeCellular : MonoBehaviour
{
    public int beeTotalInCell;

    public float genDelay;

    protected float currentGenDelay;

    private float genTimer;

    private int currentBeeTotal;

    public GameObject beePrefabs;

    public GameObject queenBee;

    private Transform queenSpawnBee;

    // Start is called before the first frame update
    void Start()
    {
        currentGenDelay = genDelay + Random.RandomRange(-0.5f, 0.5f);
    }

    // Update is called once per frame
    void Update()
    {
        if (GameController.instance.currentState == GameController.STATE.DRAWING)

            return;
        if (GameController.instance.currentState == GameController.STATE.GAMEOVER)

            return;

        if (currentBeeTotal < beeTotalInCell)
        {
            genTimer += Time.deltaTime;

            if(genTimer >= currentGenDelay)
            {
                genTimer = 0.0f;
                CreateNewBee();
            }
        }
      
    }


    void CreateNewBee()
    {
        if (Level.Instance.QueenMode)
        {
            currentBeeTotal = beeTotalInCell;
            queenSpawnBee = Instantiate(queenBee, transform.position + (Vector3)(Random.insideUnitCircle * 0.5f), Quaternion.identity).transform;
            queenSpawnBee.GetComponent<BeeController>().currentState = BeeController.STATE.MOVE;
            //currentGenDelay = genDelay + Random.RandomRange(-0.5f, 0.5f);
            StartCoroutine(CreateChildBee());
        }
        else
        {
            currentBeeTotal++;
            GameObject beeObj = Instantiate(beePrefabs, transform.position + (Vector3)(Random.insideUnitCircle * 0.5f), Quaternion.identity);
            beeObj.GetComponent<BeeController>().currentState = BeeController.STATE.MOVE;
            currentGenDelay = genDelay + Random.RandomRange(-0.5f, 0.5f);
        }
    }

    IEnumerator CreateChildBee()
    {
        yield return new WaitForSeconds(1f);
        for (int i = 0; i < beeTotalInCell; i++)
        {
            yield return new WaitForSeconds(0.1f);
            GameObject beeObj = Instantiate(beePrefabs, queenSpawnBee.position + (Vector3)(Random.insideUnitCircle * 0.5f), Quaternion.identity);
            beeObj.GetComponent<BeeController>().currentState = BeeController.STATE.MOVE;
        }
    }
    //void CreateChildBee()
    //{
    //    GameObject beeObj = Instantiate(beePrefabs, queenSpawnBee.position + (Vector3)(Random.insideUnitCircle * 0.5f), Quaternion.identity);
    //    beeObj.GetComponent<BeeController>().currentState = BeeController.STATE.MOVE;
    //}
}
