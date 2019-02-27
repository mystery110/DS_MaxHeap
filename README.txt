--An array ,Heap,is used to stored the tha max heap .

--number_of_Ele is used to store the number of element in th array .

--AddEle is a fcuntion that add a new element into the Heap . Firstly,a temporary integer , i,will get ++number_of_Ele ,mainly because avoid storing element at Heap[0](easier for computation).i will be the last element in Heap(if the heap is not empty).If i==1(Heap is empth),Heap[1]equal to the element.If i>1,it will start comparing the element to be added and the element of the parent of it's current position . If the parent is larger than the new element ,then the element should be added at the current position of i.Else , the function will store the parent at the position of i and i is now equal to 2*i.

--Find function will find a element in the max heap and return it's position (index in the Heap array)

--RenewEle is s function that will delete a element from the MaxHeap and put in the new element .Initialy,find function is called to find the index of the element to be deleted . Next , a temporary integer ,temp ,will get the last element of the max_heap . The function will start changing the key value to a new elemt . Then it will start comparing between the new element and the element of it's parent . If the parent is larger than the new element, the function end . Else if the parent is smaller than the new element,swap both the position and compare again . 
--After getting the string input by user , the string is passed to the function strSplit.This function will split the string by whitespace and convert each string to integer . After converting , the integer is push_back into a global vector named element .

--Every number in the vector is passed to the function AddEle to add to the Heap array .

--After this , user will enter another string which include the element to be deleted and a new element to be added. 

--The integer to be deleted is passed to to the function DeleteEle while the next integer is passed to the function AddEle.

--The function show will print out all the element in the Heap array .
