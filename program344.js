// Accept and display 

function DisplayFactorial(no)
{
    iCnt = 0;

    for(iCnt= 1 ; iCnt <= (no/2); iCnt++)
    {
        if((no % iCnt) == 0)
        {
            console.log(iCnt);
        }
    }
}
function main()
{
    let iValue = 20;

    DisplayFactorial(iValue);

}

main();