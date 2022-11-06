// C program for the above operation
#include <stdio.h>
#include <stdlib.h>

// Structure of a linked list node
struct node {
	int info;
	struct node* next;
};

// Pointer to last node in the list
struct node* last = NULL;


void rotate(int* nums, int numsSize, int k){

  int i, r;
  int result[numsSize];
  struct node* temp;

    
  for (i = 0; i < numsSize; i++)
    {
      
      // Initialize a new node
	temp = (struct node*)malloc(sizeof(struct node));

	// If the new node is the only
	// node in the list
	if (last == NULL) {
		temp->info = nums[i];
		temp->next = temp;
		last = temp;
	}

	// Else last node contains the
	// reference of the new node and
	// new node contains the reference
	// of the previous first node
	else {
		temp->info = nums[i];
		temp->next = last->next;

		// last node now has reference
		// of the new node temp
		last->next = temp;
	}
      
    }
  i=0;
   
  temp = last;

  while (i < k)
    {
      temp = temp->next;
      i++;
    }
    
  last = temp;
  temp = last->next;
  i=numsSize-1;

		do {
			printf("\nData = %d", temp->info);
            nums[i]=temp->info;
			temp = temp->next;
            i--;
		} while (temp != last->next);

    
    free(temp);
}



// Driver Code
int main()
{
	// Function Call
	int nums[]={1,2,3,4,5};
	int k=2;
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	
    rotate(nums,numsSize,k);
	return 0;
}
