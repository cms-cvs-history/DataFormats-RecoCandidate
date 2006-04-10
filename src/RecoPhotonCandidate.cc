// $Id: RecoPhotonCandidate.cc,v 1.1 2006/02/28 10:59:16 llista Exp $
#include "DataFormats/RecoCandidate/interface/RecoPhotonCandidate.h"
#include "DataFormats/EgammaCandidates/interface/Photon.h"

using namespace reco;

RecoPhotonCandidate::~RecoPhotonCandidate() { }

RecoPhotonCandidate * RecoPhotonCandidate::clone() const { 
  return new RecoPhotonCandidate( * this ); 
}

PhotonRef RecoPhotonCandidate::photon() const {
  return photon_;
}

SuperClusterRef RecoPhotonCandidate::superCluster() const {
  return photon_->superCluster();
}
