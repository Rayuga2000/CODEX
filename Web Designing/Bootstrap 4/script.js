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

    $('.dropdown-menu a:first-child').click(function(){
        $('#w span').html('');
    });
    $('.dropdown-menu a:last-child').click(function(){
        $('#w span').html('1');
    });
    $('#v').click(function(){
        $('.progress').toggle();
    });
    
});