 for(int i = 0 ; i<n ; i++){
          vector <int> temp = arr;
          sort(temp.begin(), temp.begin()+i);
          int l = 0;
          for(int k = 0 ; k<=i ; k++){
            if(temp[k]!=l) {
                mex[i]=l;
                break ;
            }
            l++;
          }
          if(mex[i]==-1) mex[i]=l;
        }
    }
