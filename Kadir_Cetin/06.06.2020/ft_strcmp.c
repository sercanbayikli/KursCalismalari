int ft_strcmp(char *s1, char *s2){
	int i=0;
  while(s1[i] != '\0'){
    if(s1[i] == s2[i]){
      i++;
    }  
    else{
      return 0;
    }
  }
  return i;
}
