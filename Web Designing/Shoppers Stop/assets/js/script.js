$(document).ready(function(){
    $('li.dropdown').on({
        mouseenter: function(){
            $(this).find('div').show();
        },
        mouseleave: function(){
            $(this).find('div').hide();
        }
    });
});