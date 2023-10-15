 Exercise 6.14 Solution 
#include stdio.h
#define SIZE 100

void mean(int answer[]);              function prototype 
void median(int answer[]);            function prototype 
void mode(int freq[], int answer[]);  function prototype 


int main(void) { 
    array of responses 
   int response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                         7, 8, 9, 5, 9, 8, 7, 8, 7, 1,
                         6, 7, 8, 9, 3, 9, 8, 7, 1, 7,
                         7, 8, 9, 8, 9, 8, 9, 7, 1, 9,
                         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                         7, 8, 9, 6, 8, 7, 8, 9, 7, 1,
                         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                         4, 5, 6, 1, 6, 5, 7, 8, 7, 9};
   int frequency[10] = {0};  array of response frequencies 
   
   mean(response);  process mean 
   median(response);  process median 
   mode(frequency, response);  process mode 


   return 0;
} 

 calculate average of all response values 
void mean(int answer[]) { 
   printf(%sn%sn%sn, ,  Mean, );
   int total = 0;  total of all response values 

   
    total response values 
   int j;
   for (j = 0; j = SIZE - 1; j++) {
      total += answer[j];
   } 
   
    output results 
   printf(The mean is the average value of the datan
          items. The mean is equal to the total ofn 
          all the data items divided by the numbern
          of data items (%d). , SIZE);
   printf(The mean value for this run is 
          %d  %d = %.4fnn, total, SIZE, (double) total  SIZE);
} 

 sort an array and determine median element's value 
void median(int answer[]) {    
   printf(n%sn%sn%sn, , Median, );
   puts(The unsorted array of responses is);
   
    display unsorted array 
   int loop, firstRow;
   for (loop = 0, firstRow = 1; loop = SIZE - 1; loop++) { 
       start a new line 
      if (loop % 20 == 0 && !firstRow) {
         printf(n);
      } 
         
      printf(%2d, answer[loop]);
      firstRow = 0;
   } 
   
   printf(nn);
   
    sort array 
   int pass;
   for (pass = 0; pass = SIZE - 2; pass++) {
       compare elements and swap if necessary 
	   for (loop = 0; loop = SIZE - 2; loop++) {

          swap elements 
         if (answer[loop]  answer[loop + 1]) { 
            int hold = answer[loop];
            answer[loop] = answer[loop + 1];
            answer[loop + 1] = hold;
         } 
      } 
   } 

   puts(The sorted array is);
   
    display sorted array 
   for (loop = 0, firstRow = 1; loop = SIZE - 1; loop++) { 
       start a new line 
      if (loop % 20 == 0 && !firstRow) {
         printf(n);
      } 

      printf(%2d, answer[loop]);
      firstRow = 0;
   } 
   
   puts(n);

    even number of elements 
   if (SIZE % 2 == 0) {     
      printf(The median is the average of elements %d, (SIZE + 1)  2);
      printf( and %d of, 1 + (SIZE + 1)  2);
      printf( the sorted %d element array.n, SIZE);
      printf(For this run the median is %.1fnn,
         (double)(answer[(SIZE + 1)  2] + answer[(SIZE + 1)  2 + 1])  2);
   } 
   else {  odd number of elements  
      printf(The median is element %d of , (SIZE + 1)  2);
      printf(the sorted %d element array.n, SIZE);
      printf(For this run the median is %dnn, answer[(SIZE + 1)  2 - 1]);
   } 
} 

 determine most frequent response 
void mode(int freq[], int answer[]) { 
   printf(n%sn%sn%sn, ,  Mode, );
   
    set all frequencies to 0 
   int rating;
   for (rating = 1; rating = 9; rating++) {
      freq[rating] = 0;
   } 
    
    traverse array and increment corresponding frequency 
   int loop;
   for (loop = 0; loop = SIZE - 1; loop++) {
      ++freq[answer[loop]];
   } 
      
   printf(%s%11s%19snn, Response, Frequency, Histogram);
   printf(%54sn, 1    1    2    2);
   printf(%54snn, 5    0    5    0    5);
   
    display values and frequency 
   int largest = 0;  represents largest frequency 
   int count = 0;  flag to count number of modes 
   int array[10] = {0};  array used to hold largest frequencies 
   
   for (rating = 1; rating = 9; rating++) { 
      printf(%8d%11d          , rating, freq[rating]);
      
       test if current frequency is greater than largest frequency 
      if (freq[rating]  largest) { 
         largest = freq[rating];
         
          set values of array to 0 
         int loop;
		 for (loop = 0; loop  10; loop++) {
            array[loop] = 0;
         } 

          add new largest frequency to array 
         array[rating] = largest;
         ++count;
      } 
       if current frequency equals largest, add current to array 
      else if (freq[rating] == largest) { 
         array[rating] = largest;
         ++count;
      } 

       display histogram 
      int loop;
      for (loop = 1; loop = freq[rating]; loop++) {
         printf(%s, );
      } 
         
      puts();
   } 
   
   puts();

    if more than one mode 
   if (count  1) {
      printf(%s, The modes are  );
   } 
   else {  only one mode 
      printf(%s, The mode is );
   } 

    display mode(s) 
   for (loop = 1; loop = 9; loop++) {
      if (array[loop] != 0) {
         printf(%d with a frequency of %dntt, loop, array[loop]);
      } 
   } 

   puts();
} 