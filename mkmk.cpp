void Push(struct Dstao *ptrs,ElementType item,int g )
{
	if(ptrs->Top2-ptrs->Top1==1){
	printf("¶ÑÕ»Âú"); return; 
	}
	if(Tag==1)
	trs->Date[++(ptrs->Top1)]=item;
	else
	ptrs->Data[--(ptrs->Top2)]=item;
 } 
 ElementType Pop(struct Dstaok *Ptrs,int Tag)
 {
 	if(Tag=1){
 		if(ptrs->Top1==-1){
 			printf("¶ÑÕ»1¿Õ"); return NULL; 
		 }else return Ptrs->Data[(Ptrs->Top1)--];
	 }else{
	 	if(Ptrs->Top2==ManSize){
	 		printf("¶ÑÕ»2¿Õ"); return NULL;
		 }else return Ptrs->Data[(Ptrs->Top2)++];
	 }
 }
