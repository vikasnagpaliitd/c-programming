//TBD : add double inclusion header protection mechanism in all header files

#define MAX_CUST_NAME_LEN 80
#define MAX_CUST_ADDR_LEN 256

#define MAX_CUST_NUM 50

int load_cust_data(char *file_name );
int save_cust_data(char *file_name );
void display_cust_data();

typedef struct customer
{
  int id;
  char name[MAX_CUST_NAME_LEN];
  int age;
  char address[MAX_CUST_ADDR_LEN]; 
} customer_t;



