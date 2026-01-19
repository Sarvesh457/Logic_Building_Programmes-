function Minimum(Brr)
{
    let iCnt = 0;
    let iMin = Brr[0];

    for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
    {
        if(iMin >  Brr[iCnt])
        {
        iMin = Brr[iCnt];
        }
    }
    return iMin;
}

function main()
{
    let Ret = 0;
    const Arr =[10,20,30,40,50]

    Ret = Minimum(Arr);

    console.log("The Maximum is :",Ret);
}
main();