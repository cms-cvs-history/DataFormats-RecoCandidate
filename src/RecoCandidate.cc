// $Id: RecoCandidate.cc,v 1.7 2006/02/21 10:37:36 llista Exp $
#include "DataFormats/RecoCandidate/interface/RecoCandidate.h"

using namespace reco;

RecoCandidate::~RecoCandidate() { }

TrackRef RecoCandidate::track() const {
  return TrackRef();
}

MuonRef RecoCandidate::muon() const {
  return MuonRef();
}

SuperClusterRef RecoCandidate::superCluster() const {
  return SuperClusterRef();
}

ElectronRef RecoCandidate::electron() const {
  return ElectronRef();
}

PhotonRef RecoCandidate::photon() const {
  return PhotonRef();
}

RecoCandidate::CaloTowerRef RecoCandidate::caloTower() const {
  return CaloTowerRef();
}

bool RecoCandidate::overlap( const Candidate & c ) const {
  const RecoCandidate * dstc = dynamic_cast<const RecoCandidate *>( & c );
  if ( dstc == 0 ) return false;
  TrackRef t1 = track(), t2 = dstc->track();
  if ( ! t1.isNull() && ! t2.isNull() && t1 == t2 ) return true;
  MuonRef m1 = muon(), m2 = dstc->muon();
  if ( ! m1.isNull() && ! m2.isNull() && m1 == m2 ) return true;
  ElectronRef e1 = electron(), e2 = dstc->electron();
  if ( ! e1.isNull() && ! e2.isNull() && e1 == e2 ) return true;
  SuperClusterRef s1 = superCluster(), s2 = dstc->superCluster();
  if ( ! s1.isNull() && ! s2.isNull() && s1 == s2 ) return true;
  PhotonRef p1 = photon(), p2 = dstc->photon();
  if ( ! p1.isNull() && ! p2.isNull() && p1 == p2 ) return true;
  return false;
}