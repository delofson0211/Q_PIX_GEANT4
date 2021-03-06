// -----------------------------------------------------------------------------
//  G4Basic | EventAction.h
//
//
//   * Author: Justo Martin-Albo
//   * Creation date: 15 Aug 2019
// -----------------------------------------------------------------------------

#ifndef EVENT_ACTION_H
#define EVENT_ACTION_H

#include <G4UserEventAction.hh>


class EventAction: public G4UserEventAction
{
public:
  EventAction();
  virtual ~EventAction();
  virtual void BeginOfEventAction(const G4Event*);
  virtual void EndOfEventAction(const G4Event*);
};

#endif
