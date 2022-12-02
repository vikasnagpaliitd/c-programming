// FSM :  Multiple control blocks
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

typedef struct
{
  int state;
  // more info.

}context_block_t;

#define MAX_NUM_CONTEXTS 10
//int state; // state of FSM
context_block_t context_table[MAX_NUM_CONTEXTS];

//typedef int (*state_event_handler_t)(int state, int event, void *event_specific_info);
typedef void (*state_event_handler_t)(context_block_t *p_cb, int event, void *event_specific_info);

void invalid_event_hdlr(context_block_t *p_cb, int event, void *event_specific_info)
{
   printf("Invalid event\n");
}

void state1_event1_hdlr(context_block_t *p_cb, int event, void *event_specific_info)
{
   printf("Recieved Event1 in State1... Moving to state2...\n");
   p_cb->state = STATE2;
}
void state2_event2_hdlr(context_block_t *p_cb, int event, void *event_specific_info)
{
   printf("Recieved Event2 in State2... Moving to state3...\n");
   p_cb->state = STATE3;
}
void state3_event3_hdlr(context_block_t *p_cb, int event, void *event_specific_info)
{
   printf("Recieved Event3 in State3... Moving to state1...\n");
   p_cb->state = STATE1;
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

void process_fsm(context_block_t *p_cb, int event, void *event_specific_info)
{
  //TBD : Error checking
  assert(p_cb->state < MAX_STATES);
  assert(event < MAX_EVENTS);
  fsm[p_cb->state][event](p_cb,event,event_specific_info);
}


int main()
{

  context_block_t *p_cb;
  p_cb = &context_table[0];

  p_cb->state = STATE1;

  process_fsm(p_cb, EVENT1, NULL);
  process_fsm(p_cb, EVENT2, NULL);
  process_fsm(p_cb, EVENT3, NULL);

  process_fsm(p_cb, EVENT1, NULL);
  process_fsm(p_cb, EVENT2, NULL);
  process_fsm(p_cb, EVENT3, NULL);
  return 0;
}
