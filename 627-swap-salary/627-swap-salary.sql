update salary
set sex= 
     case 
     when sex='m' then 'f'
     when sex='f' then 'm'
     end; 
    # UPDATE salary SET sex = IF(sex='m','f','m');
    #update salary set sex= CHAR(ASCII('f') + ASCII('m') - ASCII(sex));