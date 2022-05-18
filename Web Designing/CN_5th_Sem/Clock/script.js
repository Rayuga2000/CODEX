var x;
function showTime(){
    var time=new Date();
    var hh=time.getHours();
    var mm=time.getMinutes();
    var ss=time.getSeconds();
    var am_pm="AM";

    if(hh>12){
        hh-=12;
        am_pm="PM";
    }

    document.getElementById('clock').innerHTML=(hh+":"+mm+":"+ss+" "+am_pm);  
}
function startTime(){
    x=setInterval(showTime, 1000);
}
function stopTime(){
    clearInterval(x);
}