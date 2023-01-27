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
        currentBeeTotal++;
        GameObject beeObj = Instantiate(beePrefabs, transform.position + (Vector3)(Random.insideUnitCircle * 0.5f), Quaternion.identity);
        beeObj.GetComponent<BeeController>().currentState = BeeController.STATE.MOVE;
        currentGenDelay = genDelay + Random.RandomRange(-0.5f, 0.5f);
    }
}
