# ReaxFF control file for lgvdw (Liu et al. 2011)

temperature 300.0
equilibration_steps 1000

# QEq (Charge Equilibration)
qeq_iterations 100
qeq_tolerance 1.0e-6
qeq_verbose no

# lgvdW (London dispersion correction)
lgvdw_cutoff 10.0        # recommended by Liu et al.
lg_correction yes

# Torsion-hyperbond smoothing (recommended for lgvdw)
thb 0.01

# Output settings (optional)
write_control_file yes
print_energy yes
