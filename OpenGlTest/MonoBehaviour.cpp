#include "MonoBehaviour.h"
#include "Transform.h"
#include "GameObject.h"
using namespace SealEngine;

std::shared_ptr<MonoBehaviour> SealEngine::MonoBehaviour::Clone() const { return std::shared_ptr<MonoBehaviour>(Clone_impl()); }

bool MonoBehaviour::operator!=(const MonoBehaviour& obj) {

    return this != &obj;
}

bool MonoBehaviour::isActiveAndEnabled() { return enabled && gameObject->activeSelf(); }

Transform* MonoBehaviour::transform() { return gameObject->transform; }
