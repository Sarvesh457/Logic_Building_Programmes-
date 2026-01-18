function Maximum(Brr)
{
    let iCnt = 0;
    let iMax = Brr[0];

    for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
    {
        if(iMax < Brr[iCnt])
        {
        iMax = Brr[iCnt];
        }
    }
    return iMax;
}

function main()
{
    let Ret = 0;
    const Arr =[10,20,30,40,50]

    Ret = Maximum(Arr);

    console.log("The Maximum is :",Ret);
}
main();