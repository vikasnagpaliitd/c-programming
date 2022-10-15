// Driver code : invokes customer operations and ticket operations
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "customer.h"
#include "ticket.h"
#include "config.h"


int main(int argc, char *argv[ ])
{

  int choice, ret;

  char filename[MAX_FILENAME_LENGTH];

  customer_t cust; // for input/output

  //TBD : Add check on argc

  // default names of customer.csv and ticket.csv can read from config file
  //load_config_file_data(argv[1]); // to be defined in config.c
  
 
  while(1)
  {
    printf(" 1) Load Customer Data From File\n");
    printf(" 2) Save Customer Data to File\n");
    printf(" 3) Add Customer Record\n");
    printf(" 4) Search Customer Record\n");
    printf(" 5) Update Customer Record\n");
    printf(" 6) Delete Customer Record\n");
    printf(" 7) Print Customer List\n");
    printf(" 8) Exit \n");
    //TBD : expand menu for Ticket operations\n");

    printf(" Enter option : ");
    scanf("%d", &choice);
 
    switch(choice)
    {
      case 1: // Load Customer Data From File
      {
          printf("Enter filename: ");
          scanf("%s", filename);

          ret = load_cust_data(filename);
          if (ret == FAILURE)
             printf("Failed to load data\n");
          else
             printf("Loaded data successfully\n");

          break;
      }

      case 2: // Save Customer Data From File
      {
          printf("Enter filename: ");
          scanf("%s", filename);

          ret = save_cust_data(filename);
          if (ret == FAILURE)
             printf("Failed to save data\n");
          else
             printf("Saved data successfully\n");
          break;
      }

      case 3: // Add Customer Record
      {
              
         printf("Enter id, name, age, address :\n");
         //TBD : Allow spaces in cust.name and cust.address.. if needed use fgets()
         // DONT USE gets(). use fgets(line, MAX_LINE_LENGTH, stdin)
         scanf("%d%s%d%s", &(cust.id), cust.name, &(cust.age), cust.address);
         ret = create_cust(&cust);
         if (ret == FAILURE)
            printf("Failed to add customer\n");
         else
            printf("Customer added successfully\n");
         break;
      }

      case 4: // Search Customer Record
      {
         break;
      }

      case 5: // Update Customer Record
      {
         break;
      }

      case 6: // Delete Customer Record
      {
         /*
            1) Search the record. 
            2) Copy the last record at (now) vacant slot
            3) decrement num
         */

         break;
      }

      case 7: // Print Customer List
      {
         display_cust_data();
         break;
      }

      case 8: // Exit
      {
         // optional TBD : ask user whether he wishes to save before exiting....
         exit(0);
         break;
      }

      default: 
      {
         printf("Invalid option. Please try again...\n");
         return 0;
      }
    }
  }
  return 0;
}
