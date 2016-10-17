void bubbleSort(double list[], int size)
{
    while(size>1)
    {
        for(int i=0;i<size-1;i++)
        {
            if(list[i]>list[i+1])
            {
                double t=list[i];
                list[i]=list[i+1];
                list[i+1]=t;
            }
        }
        size--;
    }
    return;
}
