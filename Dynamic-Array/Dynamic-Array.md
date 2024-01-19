

# Dynamic Array (vector)

 First Why do you need a Vector/Dynamic array

We know the array is a fixed size which means that it is not possible to add an element if the array is fall

now when using the dynamic array we will solve this problem

### Vector/Daynamic Array Implementation

1. **We create a class and add main attributes (size and pointer array)**
    
    *I will explain why we need a pointer later*
    
    ```cpp
    class vector{
    private:
    	int *arr=nulptr;
    	int size=0;
    };
    ```
    ---
2. **we are creating the constructor because creating the first array** 
    
    ```cpp
    class vector{
    private:
    	int *arr=nullptr;
    	int size=0;
    public:
    	vector(int size):size(size){
    		if(size<0) // if size is less than 0 we will set size = 1
    			size=1;
    		arr=new int[size]{}; // create int array with size = "size" and the pointer point to the beginning of the array
    }
    ```
    
    if the size is less than 0 we will set size = 0
    `if(size<0) 
           size=1;`
    create integer array with size = input size and the pointer point to the beginning of the array `arr=new int[size]{};`
   
   ---
3. **Get Element**
    
    ```cpp
    int get(int idx){
    	assert(0 <= idx && idx < size);
    	return arr[idx];
    }
    //---------------------------------
    int get(int idx){
    	if(0 <= idx && idx < size)
    		return arr[idx];
    	else
    		cout<<"this index not valid\n";
    }
    ```
    
    `assert(0 <= idx && idx < size);` **if  index ≤ 0 and index < size** `return arr[index]`
   
   --- 
4. **Set Element**
    
    ```cpp
    void set(int idx, int val){
    	assert(0 <= idx && idx < size);
    	arr[idx] = val;
    }
    //---------------------------------
    void set(int idx, int val){
    	if(0 <= idx && idx < size)
    		arr[idx] = val;
    	else
    		cout<<"this index not valid\n";
    }
    ```
    
    `assert(0 <= idx && idx < size);` **if index ≤ 0 and index < size** `arr[idx] = val;`

    ---
5. **print element**
    
    We will move over the elements inside the array element by element and every time print the element.
    
    ```cpp
    void print(){
    	for(int i=0; i < size; ++i){
    			cout<<arr[i]<<" ";
    	}
    }
    ```
    ---
6. **find item**
    
    We will move over the items inside the array item by item and every time check if the item equals the input value ***if the array item equals the input value*** `Congratulations` you have found the item — **If the loop ends and the function returns -1, then this element does not exist as a vector.**
    
    ```cpp
    int find(int val){
    	for(int i=0; i < size; ++i){
    			if(arr[i] == val)
    				return i;
    	}
    	return -1;
    }
    ```
    ---
7. **Append the item in a vector**
    
    okay, in the beginning, we know the array must be fixed  size **(vector is an array)**
    then how we can insert/append/push items in the array without limitation
    simply, when we need to append an item we make a new array with a new size and then move all items from the old array to the new array.
    okay, how can write this?? 
    
    ```cpp
	    void push_back(int val)
        {
    		//create a new array
            int *new_arr = new int[size+1];
            
   			//move all elements from the old array to the new array
            for (int i = 0; i < size; i++)
                new_arr[i] = arr[i];
                
    			//add the new element
                new_arr[size] = val;
                
    			//create the new size
                ++size;
             
                //delete old array
	            delete []arr;
    		    //Assign newly created (new_array) to original array (arr)
	            arr = new_arr;
          }
    ```
    
    if we trace this code we will find this code is very slow because for every append in vector, you will create a new vector and move all element  
    **how can efficiency this code ???**
    in this way, we goal make append code and ***low operations = low time***
    we can create two size 
    1. first size (Fake/Logical size = number elements in the Vector) → called **“size”**
    2. second size (real size = vector capacity) → called **“capacity”**
    
    ***look at this, but don’t worry if you understand I will explain this.***
    *capacity = size 2*
    
    in the beginning, we’ll start with vector **capacity = size + 10**
    
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Ff28d58a7-d4f0-4e26-b66c-b62f426c940a%2FUntitled.png?table=block&id=ba0e57cc-9087-4c21-8ac8-d9832e5529af&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    
    **we will edit the constructor** 
    
    ```cpp
    vec(int size): size(size){
       if(size<1)
          size = 1;
       capacity = size + 10; 
       arr = new int[capacity] {};
    }
    ```
    
    then we will append elements and everything will be well
    
    **edit push_back**
    
    ```cpp
    void push_back(int val)
        arr[size++] = val;
    ```
    
    every time you add a new value and update the size
    this code is good 
    but what is happens when **size = capacity (array is full)**
    then we need a new array
    but we need low operations so we create a new array with a bigger capacity
    we create an array with `2 × old_Capacity`
    
    **edit push_back**
    
    ```cpp
	    void push_back(int val)
	    {
    		//if the array is full
	        if(capacity == size){
		       //make a bigger capacity 
	           capacity *= 2;
	           //create new array with new capacity
	           int *new_arr = new int[capacity] {};
	           
	           //move elements from last array to new array
	           for (int i = 0; i < size; i++)
		           new_arr[i] = arr[i];
	           
			   //delete old array
	           delete []arr;
    		   //Assign newly created (new_array) to original array (arr)
	           arr = new_arr;
	         }
    		 //append the new element and Increase thr size
	         arr[size++] = val;
	    }
    ```
    
     **:)** okay, Now we have much faster code.

    ---
8. **Insert Element**
    
    now we need to insert elements in the dynamic array how do we do it?
    first, we need to take from the user index to insert elements in this index
    then shift all the elements on the right side of input index one step because we can insert a new element.
    
    **we take example**
   
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Fb4a430c3-946a-4316-a4b3-f2b08eadeb01%2FScreenshot_(5).png?table=block&id=87ed9e8d-8b49-4522-ab44-495267068558&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)

    **I want insert element(10) in index 2**
    **Now we must shift all the elements**
   ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F3fbb6a72-4376-4dd6-acef-88e84c82d4c5%2FUntitled.png?table=block&id=e2a2eeaa-9676-4d6f-ae9f-27dd962f849a&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    **now we can insert element(10) in index 2**
    ![Untitled](![](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Fcc327fd5-3388-4f7a-b6cf-3ea0a6c41d05%2FUntitled.png?table=block&id=179fafcf-432f-47c3-b190-fa89c7f52c24&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    but every time we check if size == capacity if true we will create a new array with a new capacity like in `push_back()`
   
    okay, let’s see how to write this 
    
    ```cpp
	    void insert(int val, int idx)
	    {
    		//if the array is full
	        if(capacity == size){
		       //make a bigger capacity 
	           capacity *= 2;
	           //create new array with new capacity
	           int *new_arr = new int[capacity] {};
           
	           //move elements from last array to new array
	           for (int i = 0; i < size; i++)
	    		    new_arr[i] = arr[i];
			   
			   //delete old array
		       delete []arr;
    		   //Assign newly created new_array to original array
		       arr = new_arr;
	         }
        //In this loop shift all the elements on the right side of index 2 one step
            for (int i = size; i > idx; --i) 
	            arr[i] = arr[i-1];
            //you can also do this
    		/*
    		for (int i = size-1; i >= idx; --i) 
	            arr[i+1] = arr[i];
            */
            //insert the new item
            arr[idx] = val;
            //update the size
            ++size;
        }
    
    ```
    
    okay, I will explain shift elements again
    
    - 1st iteration in the loop
     ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F78c57a39-3112-451c-9e3b-7dc11cac6bbe%2FUntitled.png?table=block&id=3d19d225-fe09-4115-b4df-c40787bce0f7&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
     `arr[i+1] = arr[i];` ***”shift 5th element”***
    `--i;`
        
   - 2nd iteration in the loop
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F8f826710-136f-428d-bf5d-55132b1372b6%2FUntitled.png?table=block&id=3e47dad4-3713-4eb3-b40e-60a806ff4474&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    `arr[i+1] = arr[i];` ***”shift 4th element”***
    `--i;`
    
   - 3rd iteration in the loop
     ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Fad69dad9-0efd-4943-b9f8-4a16e6c612d3%2FUntitled.png?table=block&id=3e8cfe81-75eb-429b-b6ff-d3b0b5b7299f&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
     `arr[i+1] = arr[i];` ***”shift 3td element”***
    `--i;`
    
   - loop is end
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F75c0a554-7a47-4bf0-b661-03cbc80b0fb0%2FUntitled.png?table=block&id=f08a217a-18b2-4d0e-b89c-e00c6607f3b2&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
   - insert new element
    `arr[i] = val;`
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Fda6b6ba5-c49f-4328-98f5-98c48ea0a787%2FUntitled.png?table=block&id=468481ea-7a62-46bd-adfc-4f60952d5e48&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)

*ah, finally We have inserted the item successfully.*

9. `pop_back()` → delete element from back 
    
    now we need to delete elements in the Dynamic Array (vector) from the back how do we do it?
    simply, change the value for the last element to zero and decrease the size
    okay, let’s see how to write this 
    
    ```cpp
    void pop_back(){
    	arr[size-1]==0;
    	--size;
    }
    ```
   ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F1ea939ab-bb3b-458c-a590-667c7062f3ec%2FUntitled.png?table=block&id=df2f6ff8-5978-474e-9b73-812bae117959&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    now, the last element in the dynamic array is `1` in index `5` 
    and `size=6` 
    [Untitled](image-to-explain/0.png)
    so, change the value of `index 5` to zero and decrease the `size`
    it’s all **:)** 
    
10. delete an element at an index
    
    we need to create a method to delete an element at a specific index
    ***example***
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F43c715af-7183-47bb-a80f-4e8cd4eaa0b7%2FUntitled.png?table=block&id=b8dcb1dc-d400-4b23-b45c-6cb97259c3a1&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    *I need to delete an element in index 2*
    Simply, We will shift all the elements on the right side of index 2 one step to the left.
    okay, let’s see how to write this 
    
    ```cpp
    void delete_at(int idx){
    		for(int i=idx+1; i<size; i++)
    				arr[idx-1] = arr[idx];//shifting the elements
    		--size;
    }
    ```
    
    ***Let me trace that***
    I have that 
    ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F43c715af-7183-47bb-a80f-4e8cd4eaa0b7%2FUntitled.png?table=block&id=7909c3d6-bbc3-4064-965a-5c68fd3ffc4d&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=2000&userId=&cache=v2)
    - 1st  iteration in the loop
        `arr[2] = arr[3];`
        change the value of the element in index 2 (it is the element we need to delete) 
        ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F9f26b31e-cf23-4cf6-8aa9-6b371abd51b9%2FUntitled.png?table=block&id=223dcc0f-c377-48f5-ad51-6032542e9f00&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=1980&userId=&cache=v2)
    - 2nd  iteration in the loop
        `arr[3] = arr[4];`
        change the value of the element in index 3 to 7 because 4 is now in index 2
        ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Fd1ce5d6d-0875-46bf-96d6-e65931bc60b8%2FUntitled.png?table=block&id=0a21ffbc-150b-4b38-9cdc-1009145305a3&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=1980&userId=&cache=v2)
    - 3rd  iteration in the loop
        `arr[4] = arr[5];`
        change the value of the element in index 4 to 1 because 7 is now in index 3
        ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F6e2793aa-d398-4457-b4cc-adf3839bc7c4%2FUntitled.png?table=block&id=6631329e-fd29-4b6d-918f-e8db51537460&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=1990&userId=&cache=v2)
    - 4th  iteration in the loop
        `arr[5] = arr[6];`
        change the value of the element in index 5 to 0 because 1 is now in index 4 and now index 4 is the last index in the dynamic array because we deleted element 
        ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2Ff068cdfd-27a4-48da-a91a-db32f5db8f81%2FUntitled.png?table=block&id=4f2d0df9-a026-41ce-bdc9-b0e1dcc29865&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=1980&userId=&cache=v2)
    - decreasing the size
        `--size;`
        change the the size
        ![Untitled](https://omargoher.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2F227b97bf-d1fb-449d-bac0-3527967beaef%2F1c5fc72c-7718-4f92-8f95-5a4957d10d9d%2FUntitled.png?table=block&id=34fc0949-9ca3-471a-8fe6-8910bc9afc55&spaceId=227b97bf-d1fb-449d-bac0-3527967beaef&width=1990&userId=&cache=v2)
    okay, now we deleted 10 **:D**
