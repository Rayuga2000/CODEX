$(document).ready(function(){
    $('div').add().text('Hello World').css('color','green').css('font-size','60px')
    .css('border','1px solid black').css('background','blue');
    
    $('div').on({
        mousedown: function(){
            $(this).text('Hello World').css('color','red').css('font-size','60px')
        .css('border','1px solid black');
        },
        mouseup: function(){
            $(this).text('Hello World').css('color','green').css('font-size','60px')
        .css('border','1px solid black');
        }
    });

    $('button').click(function(){
        $('div').fadeToggle(2000);
    });
});