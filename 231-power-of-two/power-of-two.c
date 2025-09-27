bool isPowerOfTwo(int n) {
    int result =1;
    for(int i=1;result<n;i++){
        if (result > n / 2) break;
        result *=2;
    }
    if(result == n){
      return true;
    }
   
    return false;
}