int main(void)
{
	double	dou = 000000444444.1516849;
	double	ldou = 3659855789.4567897;
	double	nb_g = 000000424685.1516841;

	if (TEST_CHECKER)
	{
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1444565444646.6465424242242));
		//printf(" -- %d\n", printf("\t-->%f<--", 1444565444646.6465424242242));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--{eoc}", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", "Ω ω", L""));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%4.1S<--{eoc}", L"Jambon"));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%s<--{eoc}", 100));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--{eoc}", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//printf(" -- %d\n", printf("\t-->%C<--", 0x1234));
		printf(" -- %d\n", printf("\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", "Ω ω", L""));
		//printf(" -- %d\n", printf("\t-->%4.1S<--", L"Jambon"));
		//printf(" -- %d\n", printf("\t-->%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S<--", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
		//ft_printf("%h -0ll43.*+zd\n", 1 , 42);
		//printf("%h -0ll43.*+zd\n", 1 , 42);
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1.42));
		//printf(" -- %d\n", printf("\t-->%f<--", 1.42));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}\t-->%f<--{eoc}", 1.42));
		//printf(" -- %d\n", printf("\t-->%f<--", 1.42));
		//ft_printf(" -- {orange}%d{eoc}\n", ft_printf("% Z%s", "test"));
		//printf(" -- %d\n", printf("% Z%s", "test"));
		//ft_printf(" -- %d\n", ft_printf("%g -- %g -- %g -- %g -- %g", 0.000042, 0.00000042, 42.0, 54336.2564, 5489461235.0));
		//if (RPTF)
		//		  printf(" -- %d\n", printf("%g -- %g -- %g -- %g -- %g", 0.000042, 0.00000042, 42.0, 54336.2564, 5489461235.0));
	}
	if (TEST_F)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%f --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%f<--     -->%f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%f<--     -->%f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40f<--     -->%40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40f<--     -->%40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40f<--     -->%+40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40f<--     -->%+40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0f<--     -->%0f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0f<--     -->%0f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15f<--     -->%.15f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15f<--     -->%.15f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3f<--     -->%.3f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3f<--     -->%.3f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15f<--     -->%40.15f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15f<--     -->%40.15f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40f<--     -->%-40f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40f<--     -->%-40f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+f<--     -->%+f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+f<--     -->%+f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20f<--     -->%+20f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20f<--     -->%+20f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*f<--     -->%*f<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*f<--     -->%*f<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20f<--     -->%*20f<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20f<--     -->%*20f<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*f<--     -->%.*f<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*f<--     -->%.*f<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*f<--     -->%*.*f<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*f<--     -->%*.*f<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#f<--     -->%#f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#f<--     -->%#f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% f<--     -->% f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% f<--     -->% f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% f<--     -->%     f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% f<--     -->%      f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020f<--     -->%020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020f<--     -->%020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020f<--     -->%-020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020f<--     -->%-020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020f<--     -->%+020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020f<--     -->%+020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020f<--     -->% 020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020f<--     -->% 020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.f<--     -->%.f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.f<--     -->%.f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5f<--     -->%.5f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5f<--     -->%.5f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20f<--     -->%-+20f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20f<--     -->%-+20f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20f<--     -->%-+020f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20f<--     -->%-+020f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#f<--     -->%#f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#f<--     -->%#f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.f<--     -->%#.f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.f<--     -->%#.f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10f<--     -->%#.10f<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10f<--     -->%#.10f<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 f<--     -->%#20-.*+0 f<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 f<--     -->%#20-.*+0 f<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	if (TEST_E)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%e --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%e<--     -->%e<--{eoc}", ++i, 0.0025, -0.0025));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%e<--     -->%e<--", i, 0.0025, -0.0025));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40e<--     -->%40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40e<--     -->%40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40e<--     -->%+40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40e<--     -->%+40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0e<--     -->%0e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0e<--     -->%0e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15e<--     -->%.15e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15e<--     -->%.15e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3e<--     -->%.3e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3e<--     -->%.3e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15e<--     -->%40.15e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15e<--     -->%40.15e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40e<--     -->%-40e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40e<--     -->%-40e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+e<--     -->%+e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+e<--     -->%+e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20e<--     -->%+20e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20e<--     -->%+20e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*e<--     -->%*e<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*e<--     -->%*e<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20e<--     -->%*20e<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20e<--     -->%*20e<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*e<--     -->%.*e<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*e<--     -->%.*e<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*e<--     -->%*.*e<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*e<--     -->%*.*e<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#e<--     -->%#e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#e<--     -->%#e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% e<--     -->% e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% e<--     -->% e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% e<--     -->%     e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% e<--     -->%      e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020e<--     -->%020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020e<--     -->%020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020e<--     -->%-020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020e<--     -->%-020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020e<--     -->%+020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020e<--     -->%+020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020e<--     -->% 020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020e<--     -->% 020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.e<--     -->%.e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.e<--     -->%.e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5e<--     -->%.5e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5e<--     -->%.5e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20e<--     -->%-+20e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20e<--     -->%-+20e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20e<--     -->%-+020e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20e<--     -->%-+020e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#e<--     -->%#e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#e<--     -->%#e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.e<--     -->%#.e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.e<--     -->%#.e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10e<--     -->%#.10e<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10e<--     -->%#.10e<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 e<--     -->%#20-.*+0 e<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 e<--     -->%#20-.*+0 e<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	if (TEST_LE)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%E --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%E<--     -->%E<--{eoc}", ++i, 0.0025, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%E<--     -->%E<--", i, 0.0025, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40E<--     -->%40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40E<--     -->%40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40E<--     -->%+40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40E<--     -->%+40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0E<--     -->%0E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0E<--     -->%0E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15E<--     -->%.15E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15E<--     -->%.15E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3E<--     -->%.3E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3E<--     -->%.3E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15E<--     -->%40.15E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15E<--     -->%40.15E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40E<--     -->%-40E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40E<--     -->%-40E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+E<--     -->%+E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+E<--     -->%+E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20E<--     -->%+20E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20E<--     -->%+20E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*E<--     -->%*E<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*E<--     -->%*E<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20E<--     -->%*20E<--{eoc}", ++i, 40, dou, 40, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20E<--     -->%*20E<--", i, 40, dou, 40, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*E<--     -->%.*E<--{eoc}", ++i, 15, dou, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*E<--     -->%.*E<--", i, 15, dou, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*E<--     -->%*.*E<--{eoc}", ++i, 40, 15, dou, 40, 15, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*E<--     -->%*.*E<--", i, 40, 15, dou, 40, 15, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#E<--     -->%#E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#E<--     -->%#E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% E<--     -->% E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% E<--     -->% E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% E<--     -->%     E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% E<--     -->%      E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020E<--     -->%020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020E<--     -->%020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020E<--     -->%-020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020E<--     -->%-020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020E<--     -->%+020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020E<--     -->%+020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020E<--     -->% 020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020E<--     -->% 020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.E<--     -->%.E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.E<--     -->%.E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5E<--     -->%.5E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5E<--     -->%.5E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20E<--     -->%-+20E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20E<--     -->%-+20E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20E<--     -->%-+020E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20E<--     -->%-+020E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#E<--     -->%#E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#E<--     -->%#E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.E<--     -->%#.E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.E<--     -->%#.E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10E<--     -->%#.10E<--{eoc}", ++i, dou, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10E<--     -->%#.10E<--", i, dou, -dou));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 E<--     -->%#20-.*+0 E<--{eoc}", ++i, 10, dou, 10, -dou));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 E<--     -->%#20-.*+0 E<--", i, 10, dou, 10, -dou));
		nb_test++;
	}
	if (TEST_G)
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%g --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%g<--     -->%g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%g<--     -->%g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40g<--     -->%40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40g<--     -->%40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40g<--     -->%+40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40g<--     -->%+40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0g<--     -->%0g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0g<--     -->%0g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.15g<--     -->%.15g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.15g<--     -->%.15g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3g<--     -->%.3g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3g<--     -->%.3g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.15g<--     -->%40.15g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.15g<--     -->%40.15g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40g<--     -->%-40g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40g<--     -->%-40g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+g<--     -->%+g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+g<--     -->%+g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20g<--     -->%+20g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20g<--     -->%+20g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*g<--     -->%*g<--{eoc}", ++i, 15, nb_g, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*g<--     -->%*g<--", i, 15, nb_g, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20g<--     -->%*20g<--{eoc}", ++i, 40, nb_g, 40, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20g<--     -->%*20g<--", i, 40, nb_g, 40, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*g<--     -->%.*g<--{eoc}", ++i, 15, nb_g, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*g<--     -->%.*g<--", i, 15, nb_g, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*g<--     -->%*.*g<--{eoc}", ++i, 40, 15, nb_g, 40, 15, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*g<--     -->%*.*g<--", i, 40, 15, nb_g, 40, 15, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#g<--     -->%#g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#g<--     -->%#g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% g<--     -->% g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% g<--     -->% g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% g<--     -->%     g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% g<--     -->%      g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020g<--     -->%020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020g<--     -->%020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020g<--     -->%-020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020g<--     -->%-020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020g<--     -->%+020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020g<--     -->%+020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020g<--     -->% 020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020g<--     -->% 020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.g<--     -->%.g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.g<--     -->%.g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5g<--     -->%.5g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5g<--     -->%.5g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20g<--     -->%-+20g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20g<--     -->%-+20g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20g<--     -->%-+020g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20g<--     -->%-+020g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#g<--     -->%#g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#g<--     -->%#g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.g<--     -->%#.g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.g<--     -->%#.g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10g<--     -->%#.10g<--{eoc}", ++i, nb_g, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10g<--     -->%#.10g<--", i, nb_g, -nb_g));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 g<--     -->%#20-.*+0 g<--{eoc}", ++i, 10, nb_g, 10, -nb_g));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 g<--     -->%#20-.*+0 g<--", i, 10, nb_g, 10, -nb_g));
		nb_test++;
	}
	if (TEST_LG)
	{

	}
	if (TEST_B)
	{
		dec = 42;
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST %%b --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40b<---{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*b<--{eoc}", ++i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20b<--{eoc}", ++i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*b<--{eoc}", ++i, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*b<--{eoc}", ++i, 40, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10b<--{eoc}", ++i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 b<--{eoc}", ++i, 10, dec));
		nb_test++;
	}
	if (TEST_NO) // Si un caractere inatendu ou pas de specifier
	{
		ft_printf(" (%d)\n\n", ft_printf("\n \t\t{green}-- TEST NO --{eoc}"));
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%0%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%0%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.3%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.3%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%40.20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%40.20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-40%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-40%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*%<--{eoc}", ++i, 40, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*%<--", i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*20%<--{eoc}", ++i, 40, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*20%<--", i, 40, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.*%<--{eoc}", ++i, 20, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.*%<--", i, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%*.*%<--{eoc}", ++i, 40, 20, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%*.*%<--", i, 40, 20, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% %<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% %<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% %<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% %<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%+020%<--{eoc", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%+020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->% 020%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->% 020%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%.5%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%.5%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%-0+20%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%-0+20%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#.10%<--{eoc}", ++i, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#.10%<--", i, dec));
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}\n", ft_printf("{215}%d)\t-->%#20-.*+0 %<--{eoc}", ++i, 10, dec));
		if (RPTF)
			printf(" -- %d\n", printf("%d)\t-->%#20-.*+0 %<--", i, 10, dec));
		nb_test++;
	}
	if (TEST_COLOR)
	{
		ft_printf("{all}");
	}
	if (TEST_BAZAR)
	{
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llX", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhX", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhX", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", -4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", -4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jx", -4294967297), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jx", -4294967297), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llX", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llX", 9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%llX", 9223372036854775808), i);
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", 32767), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", 32767), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", −32768), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%hd", −32768), i);
		//nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", 32768), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", 32768), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hd", -32769), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hd", -32769), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Signed Char ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", 127), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", 127), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", 128), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", 128), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", -128), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", -128), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hhd", -129), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hhd", -129), i);
		nb_test++;

		ft_printf("\n\t{green}¤ Integer Long ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", 2147483647), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ld", 2147483647), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", –2147483648), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%ld", –2147483648), i);
		//nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", 2147483648), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ld", 2147483648), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ld", –2147483649), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%ld", –2147483649), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Long Long ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lld", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lld", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lld", -9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%lld", -9223372036854775808), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Intmax_t ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jd", 9223372036854775807), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%jd", 9223372036854775807), i);
		nb_test++;
		//ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%jd", –9223372036854775808), ++i);
		//if (RPTF)
		//	printf(" -- %d     -- Test %d\n", printf("%jd", –9223372036854775808), i);
		//nb_test++;

		ft_printf("\n\t{green}¤ Integer Size_t ¤{eoc}\n\n");

		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", 0), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", 0), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%zd", -1), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%zd", -1), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%lu", -42), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%lu", -42), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%llu", 4999999999), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%llu", 4999999999), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ju", 4999999999), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ju", 4999999999), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%ju", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%ju", 4294967296), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%U", 4294967295), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%U", 4294967295), i);
		nb_test++;
		ft_printf(" -- {orange}%d{eoc}     -- Test %d\n", ft_printf("%hU", 4294967296), ++i);
		if (RPTF)
			printf(" -- %d     -- Test %d\n", printf("%hU", 4294967296), i);
		nb_test++;
	}
	return (0);
}
