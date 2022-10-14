
load_customer_data_from_file(char *file_name)
{
}
save_customer_data_from_file()
{
}

typedef customer // TBD : to be moved to customer.h
{
  char name[ ];
  int  age;
  // .....

} customer_t


//Options:
//1:Array of structures
customer_t customer_list[MAX_NUM_CUSTOMERS]

//2:Array of pointers to structures
customer_t* customer_list[MAX_NUM_CUSTOMERS]; // each ptr is used to point to single record


//3:pointer to dynamically allocated array of structures
 // num_elements vs capacity
// note: has difficulties when adding more customers.. how to expand
customer_t* customer_list; // customer_list = malloc(sizeof(customer_t) *num) 


//4:Linked list of customers
customer_t* customer_list; //customer record has next pointer // customer_list is head of the linked list

// More approaches may be possible



/* All CRUD happensin memory data structures (and is committed to
   file when save_customer_data_from_file is called */
create_customer();
search_customer();
update_customer();
delete_customer();

