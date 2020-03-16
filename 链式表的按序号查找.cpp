	ElementType FindKth( List L, int K ){
	  if(!L)return ERROR;
	  while(--K){
	    if(L->Next!=NULL){
	      L = L->Next;
	    }
	    else{
	      return ERROR;
	    }
	  }
	  return L->Data;
	}



