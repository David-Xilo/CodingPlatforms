select repeat('* ', @number := @number - 1) from information_schema.tables, (select @number := 21) t limit 20;

