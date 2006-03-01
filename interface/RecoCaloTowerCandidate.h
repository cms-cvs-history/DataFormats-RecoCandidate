#ifndef RecoCandidate_RecoCaloTowerCandidate_h
#define RecoCandidate_RecoCaloTowerCandidate_h
/** \class reco::RecoCaloTowerCandidate
 *
 * Reco Candidates with a CaloTower component
 *
 * \author Luca Lista, INFN
 *
 * \version $Id$
 *
 */
#include "DataFormats/RecoCandidate/interface/RecoCandidate.h"

namespace reco {

  class RecoCaloTowerCandidate : public RecoCandidate {
  public:
    /// default constructor
    RecoCaloTowerCandidate() : RecoCandidate() { }
    /// constructor from values
    RecoCaloTowerCandidate( Charge q , const LorentzVector & p4, const Point & vtx = Point( 0, 0, 0 ) ) :
      RecoCandidate( q, p4, vtx ) { }
    /// destructor
    virtual ~RecoCaloTowerCandidate();
    /// returns a clone of the candidate
    virtual RecoCaloTowerCandidate * clone() const;
    /// set CaloTower reference
    void setCaloTower( const CaloTowerRef & r ) { caloTower_ = r; }

  private:
    /// reference to a CaloTower
    virtual CaloTowerRef caloTower() const;
    /// reference to a CaloTower
    CaloTowerRef caloTower_;
  };
  
}

#endif
