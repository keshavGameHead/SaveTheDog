using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace SuperStarSdk.CrossPromo
{
    public class CoroutineQueue
    {
        private readonly MonoBehaviour _owner;
        private Coroutine _internalCoroutine;
        private readonly Queue<IEnumerator> _actions = new Queue<IEnumerator>();

        public CoroutineQueue(MonoBehaviour owner)
        {
            _owner = owner;
        }

        private void StartLoop()
        {
            _internalCoroutine = _owner.StartCoroutine(Process());
        }

        private void StopLoop()
        {
            if (_internalCoroutine != null)
                _owner.StopCoroutine(_internalCoroutine);
            _internalCoroutine = null;
        }

        public void EnqueueAction(IEnumerator action)
        {
            _actions.Enqueue(action);
            if (_internalCoroutine == null)
                StartLoop();
        }

        private IEnumerator Process()
        {
            while (true)
            {
                if (_actions.Count > 0)
                {
                    yield return _owner.StartCoroutine(_actions.Dequeue());
                }
                else
                {
                    StopLoop();
                    yield break;
                }
            }
        }
    }
}