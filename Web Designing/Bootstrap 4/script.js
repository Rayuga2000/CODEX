$(document).ready(function(){
    $('#x').click(function(){
        $('.row div').hide();
    });
    $('#y').click(function(){
        $('.row div').show();
    });
    $('#z').click(function(){
        $('.row div').toggle();
    });
});