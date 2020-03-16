int GetHeight( BinTree BT ){
  if(!BT)return 0;
  int leftHeight = GetHeight(BT->Left);
  int rightHeight = GetHeight(BT->Right);
  return leftHeight>rightHeight?leftHeight+1:rightHeight+1;
}
