///
/// HybridEdKeyPairSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridEdKeyPairSpec.hpp"

namespace margelo::nitro::crypto {

  void HybridEdKeyPairSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("generateKeyPair", &HybridEdKeyPairSpec::generateKeyPair);
      prototype.registerHybridMethod("generateKeyPairSync", &HybridEdKeyPairSpec::generateKeyPairSync);
      prototype.registerHybridMethod("getPublicKey", &HybridEdKeyPairSpec::getPublicKey);
      prototype.registerHybridMethod("getPrivateKey", &HybridEdKeyPairSpec::getPrivateKey);
      prototype.registerHybridMethod("sign", &HybridEdKeyPairSpec::sign);
      prototype.registerHybridMethod("signSync", &HybridEdKeyPairSpec::signSync);
      prototype.registerHybridMethod("verify", &HybridEdKeyPairSpec::verify);
      prototype.registerHybridMethod("verifySync", &HybridEdKeyPairSpec::verifySync);
      prototype.registerHybridMethod("setCurve", &HybridEdKeyPairSpec::setCurve);
    });
  }

} // namespace margelo::nitro::crypto
