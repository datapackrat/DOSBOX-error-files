/* To compile, use "c88 test" then "bind test" */
main()
   {
   int i;
   char str[128];

   printf("type characters, Press Esc to exit\n");
   do
      {
      read(0,&i,1);  /* 0 == STDIN */
      printf("  %02x\n",i);
      } while (i != '\033');
   printf("calling gets()\n");
   gets(str);
   }
