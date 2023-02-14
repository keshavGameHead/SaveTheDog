//using DG.Tweening;
//using System.Collections;
//using System.Collections.Generic;
//using System.Linq;
//using UnityEngine;

//[RequireComponent(typeof(ParticleSystem))]
//public class VFXCoinGamePlayAttacker : MonoBehaviour
//{
//    protected ParticleSystem ps;
//    protected ParticleSystem.Particle[] m_Particles;
//    public Vector3 startPos;
//    public Transform startPoint, endTarget;
//    public ParticleSystem endVFX;
//    public bool standAlone = true;
//    public int MaxParticles = 2;
//    public bool IsGamePlayPs;
//    Sequence seq;
//    ParticleSystem burstFX;
//    public Material StarWithShadow, StarWithoutShadow;
   

//    public int numParticlesAlive
//    {
//        get; set;
//    }

//    public float attractDelay
//    {
//        get; set;
//    }

//    public Vector3 endpos
//    {
//        get; set;
//    }

//    public void SpawnReward(int rewardValue, Vector3 pos)
//    {
//        gameObject.SetActive(true);
//        DOTween.Kill(this);
//        StopAllCoroutines();
      
//        transform.position = pos;
//        rewardValue = Mathf.Clamp(rewardValue, 1, 20);
//        ps = GetComponent<ParticleSystem>();
//        var main = ps.main;
//        main.maxParticles = 0;
//        main.maxParticles = rewardValue - 1;
//        attractDelay = main.startLifetimeMultiplier;
//        Spawn();
//    }

//    protected virtual void Spawn()
//    {
//        for (int i = 0; i < MaxParticles; i++)
//        {
//            if (transform.childCount < MaxParticles)
//            {
//                Transform child = Instantiate(transform.GetChild(0), transform, false);
//                child.gameObject.SetActive(false);
//            }
//        }

//        if (endVFX != null)
//        {
//            if (burstFX == null)
//            {
//                burstFX = Instantiate(endVFX, endTarget, false);
//                if (IsGamePlayPs)
//                {
//                    Destroy(burstFX.gameObject,0);//3
//                }
//            }
//        }

//        m_Particles = new ParticleSystem.Particle[ps.main.maxParticles];
//        StartCoroutine(AttractParticle());
//    }

//    protected virtual IEnumerator AttractParticle()
//    {
//        endpos = endTarget.position;
  
//        yield return new WaitForSeconds(0f);//attractDelay
//        numParticlesAlive = ps.GetParticles(m_Particles);
//        seq = DOTween.Sequence();
       
//        for (int i = 0; i < MaxParticles; i++)
//        {
//            Transform childParticle = transform.GetChild(i);
//            childParticle.localScale = Vector3.one;
        
//            childParticle.GetComponent<ParticleSystemRenderer>().material = StarWithoutShadow;
//            //childParticle.position = m_Particles[i].position;
//            childParticle.gameObject.SetActive(true);

//            seq.PrependInterval(.1F);
         
//            seq.Join(childParticle.DOMove(endpos, 0.5f)
//                .SetEase(Ease.OutSine)
//                .OnComplete(delegate ()
//                {
//                    if (GameManager.instanse.isStarAddOnTotalSoundPlay)
//                    {
//                        SoundManager._soundmanager.SoundManage("StarAppear");
//                    }
//                    PunchScaleTarget();
//                }));
//            seq.Join(childParticle.DOScale(Vector3.zero, 1)
//                .SetEase(Ease.InCubic));
//            yield return new WaitForSeconds(.1f);
//            childParticle.GetComponent<ParticleSystemRenderer>().material = StarWithShadow;
//        }

//        yield return new WaitForSeconds(seq.Duration());
//        gameObject.SetActive(false);
//        StopAllCoroutines();
//    }

//    public virtual void PunchScaleTarget()
//    {
//        if (burstFX != null)
//            burstFX.Play();

//        endTarget.localScale = Vector3.one;
//        endTarget.DOPunchScale(endTarget.localScale * .2F, .1F);

//    }
//}
