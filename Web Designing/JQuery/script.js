$(document).ready(function(){
    $('div').click(function(){
        var div=$('div');
        div.animate({marginLeft: '+=250px',height: '+=150px',width: '+=150px'},'slow');
        div.animate({marginTop: '+=250px',height: '-=150px',width: '-=150px'},'slow');
        div.animate({marginLeft: '-=250px',height: '+=150px',width: '+=150px'},'slow');
        div.animate({marginTop: '-=250px',height: '-=150px',width: '-=150px'},'slow',function(){
            alert("Animation Ended");
        });
    });

    $('input').keyup(function(){
        var value=$(this).val().toLowerCase();
        $('#tbody tr').filter(function(){
            $(this).toggle($(this).text().toLowerCase().indexOf(value)>-1);
        });
    });
});