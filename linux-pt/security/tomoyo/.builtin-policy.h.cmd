cmd_security/tomoyo/builtin-policy.h := (echo "static char tomoyo_builtin_profile[] __initdata ="; ./scripts/basic/bin2c </dev/null; echo ";"; echo "static char tomoyo_builtin_exception_policy[] __initdata ="; ./scripts/basic/bin2c <./security/tomoyo/policy/exception_policy.conf.default; echo ";"; echo "static char tomoyo_builtin_domain_policy[] __initdata ="; ./scripts/basic/bin2c </dev/null; echo ";"; echo "static char tomoyo_builtin_manager[] __initdata ="; ./scripts/basic/bin2c </dev/null; echo ";"; echo "static char tomoyo_builtin_stat[] __initdata ="; ./scripts/basic/bin2c </dev/null; echo ";") >security/tomoyo/builtin-policy.h