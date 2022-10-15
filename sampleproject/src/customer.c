#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "common.h"
#include "customer.h"

// Global data structure
customer_t cust_list[MAX_CUST_NUM];
int num_cust;


/* This function reads data from file_name and stores in global cust_list 
   data structure. Returns SUCCESS/FAILURE */
int load_cust_data(char *file_name )
{
  FILE *fp;

  // Customer attributes
  int id;
  char name[MAX_CUST_NAME_LEN];
  int age;
  char addr[MAX_CUST_ADDR_LEN];
 
  char line[MAX_LINE_LENGTH]; // for reading from file 
  char *ret_str;

  int ret;


  fp = fopen(file_name, "r");

  if (fp == NULL)
  {
      printf("could not open file");
      perror(file_name);
      return FAILURE;
  }

  /* Process data */
  while((ret_str = fgets(line, MAX_LINE_LENGTH, fp)) != NULL)
  {
     // Remove the newline at end
     line[strlen(line) - 1] = '\0';

     // id, name, age, addresss
     ret = sscanf(line, "%d,%[^,],%d,%[^,]", &id, name, &age, addr);
     if (ret == 4)
        printf("id=%d, name=[%s], age=%d, address =[%s]\n", id, name, age, addr);
     else
        printf("fscanf could not read 4 values : Ignoring line=%s\n", line);
  }

  /* Close file */
  fclose(fp);
  return SUCCESS;   
}

#if 0
save_cust_data()
{
}

/* All CRUD operations happen in memory data structures (and is committed to
   file when save_customer_data_from_file is called */
create_cust()
{

}

find_cust()
{

}

update_cust()
{

}
delete_cust()
{

}
#endif

/* Options for data structure :
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

*/
