void allIndexes(int input[], int size, int x, int output[],int &k,int curr){
    if(curr==size)
        return;
    if(input[curr]==x){
        output[k]=curr;
    	k++;
    }
        allIndexes(input,size,x,output,k,curr+1);
       
}
int allIndexes(int input[], int size, int x, int output[]){
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    int k=0;
	allIndexes(input,size,x,output,k,0);
    return k;
}