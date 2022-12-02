// FSM : 
#include <stdio.h>
#include <assert.h>

// States. Enum can also be used 
#define STATE1 0
#define STATE2 1
#define STATE3 2

#define MAX_STATES 3


// Events. Enum can also be used 
#define EVENT1 0
#define EVENT2 1
#define EVENT3 2

#define MAX_EVENTS 3



int state; // state of FSM

typedef int (*state_event_handler_t)(int state, int event, void *event_specific_info);

int invalid_event_hdlr(int state, int event, void *event_specific_info)
{
   printf("Invalid event\n");
   return state;
}

int state1_event1_hdlr(int state, int event, void *event_specific_info)
{
   printf("Recieved Event1 in State1... Moving to state2...\n");
   return STATE2;
}
int state2_event2_hdlr(int state, int event, void *event_specific_info)
{
   printf("Recieved Event2 in State2... Moving to state3...\n");
   return STATE3;
}
int state3_event3_hdlr(int state, int event, void *event_specific_info)
{
   printf("Recieved Event3 in State3... Moving to state1...\n");
   return STATE1;
}

state_event_handler_t fsm[MAX_STATES][MAX_EVENTS] = {
  {
    state1_event1_hdlr, 
    invalid_event_hdlr, 
    invalid_event_hdlr 
  },
  {
    invalid_event_hdlr, 
    state2_event2_hdlr,
    invalid_event_hdlr 
  },
  {
    invalid_event_hdlr, 
    invalid_event_hdlr,
    state3_event3_hdlr
  }
};

void process_fsm(int event, void *event_specific_info)
{
  //TBD : Error checking
  assert(state < MAX_STATES);
  assert(event < MAX_EVENTS);
  state = fsm[state][event](state,event,event_specific_info);
}


int main()
{
  process_fsm(EVENT1, NULL);
  process_fsm(EVENT2, NULL);
  process_fsm(EVENT3, NULL);

  process_fsm(EVENT1, NULL);
  process_fsm(EVENT2, NULL);
  process_fsm(EVENT3, NULL);
  return 0;
}
