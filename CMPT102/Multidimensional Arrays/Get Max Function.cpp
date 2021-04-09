int getMax(a[][10], int rows){
   
    int max = a[0][0];
    for(int rows = 0;rows<rows;rows++){
        for(int col = 0; col < 10; col++){
            if(max>a[rows][col]){
                max == a[rows][col];
            }else{
                continue;
            }
        }
        
    return max;
}
