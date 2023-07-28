int main () {
   int ret;
   FILE *fp;
  
   
   ret = rename("Data1.txt", "Data2.txt");

   if(ret == 0) {
      printf("File renaming is successful");
   } else {
      printf("Error: unable to rename the file");
   }
   
   return 0;
}

