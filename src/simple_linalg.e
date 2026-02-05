note
	description: "[
		Linear algebra facade: vectors, matrices, decompositions.
		Design by Contract ensures reliability: preconditions validate well-conditioning,
		postconditions provide error estimates and solution quality metrics.
	]"
	author: "Larry Rix"

class SIMPLE_LINALG

create
	make

feature {NONE} -- Initialization

	make
			-- Create linear algebra engine with numerical defaults.
		do
			-- Initialization stub - Phase 1 implementation
		end

feature -- Vector Creation

	vector_2 (a_x: REAL_64; y: REAL_64): VECTOR_2
			-- Create 2D vector from components
		do
			create Result.make_from_components (a_x, y)
		ensure
			result_valid: Result /= Void
		end

	vector_3 (a_x: REAL_64; y: REAL_64; z: REAL_64): VECTOR_3
			-- Create 3D vector from components
		do
			create Result.make_from_components (a_x, y, z)
		ensure
			result_valid: Result /= Void
		end

	vector_n (a_components: ARRAY [REAL_64]): VECTOR_N
			-- Create n-dimensional vector from array
		require
			components_valid: a_components /= Void and a_components.count > 0
		do
			create Result.make_from_array (a_components)
		ensure
			result_valid: Result /= Void
			dimension_preserved: Result.dimension = a_components.count
		end

feature -- Matrix Creation

	matrix_identity (a_n: INTEGER): MATRIX
			-- Create n×n identity matrix I
		require
			size_positive: a_n > 0
		do
			create Result.make_identity (a_n)
		ensure
			result_valid: Result /= Void
			is_square: Result.rows = a_n and Result.columns = a_n
			is_identity: Result.is_identity
		end

	matrix_from_array_2d (a_data: ARRAY2 [REAL_64]): MATRIX
			-- Create matrix from 2D array
		require
			data_valid: a_data /= Void
		do
			create Result.make_from_array_2d (a_data)
		ensure
			result_valid: Result /= Void
			dimensions_match: Result.rows = a_data.row_count and Result.columns = a_data.column_count
		end

feature -- Vector Operations

	dot_product (a_v1: VECTOR_N; v2: VECTOR_N): REAL_64
			-- Dot product v1 · v2
		require
			vectors_valid: a_v1 /= Void and v2 /= Void
			same_dimension: a_v1.dimension = v2.dimension
		do
			Result := a_v1.dot_product (v2)
		ensure
			result_valid: Result.is_valid
		end

	vector_norm (a_v: VECTOR_N; norm_type: INTEGER): REAL_64
			-- Vector norm: 1=L1, 2=L2 (Euclidean), 3=Infinity
		require
			vector_valid: a_v /= Void
			norm_type_valid: norm_type >= 1 and norm_type <= 3
		do
			Result := a_v.norm (norm_type)
		ensure
			result_valid: Result.is_valid and Result >= 0.0
		end

feature -- Matrix Operations

	matrix_multiply (a_a: MATRIX; b: MATRIX): MATRIX
			-- Matrix product C = A × B
		require
			matrices_valid: a_a /= Void and b /= Void
			dimensions_compatible: a_a.columns = b.rows
		do
			Result := a_a.multiply (b)
		ensure
			result_valid: Result /= Void
			result_dimensions: Result.rows = a_a.rows and Result.columns = b.columns
		end

	matrix_transpose (a_m: MATRIX): MATRIX
			-- Transpose of matrix M
		require
			matrix_valid: a_m /= Void
		do
			Result := a_m.transpose
		ensure
			result_valid: Result /= Void
			dimensions_swapped: Result.rows = a_m.columns and Result.columns = a_m.rows
		end

	matrix_determinant (a_m: MATRIX): REAL_64
			-- Determinant det(M)
		require
			matrix_valid: a_m /= Void
			square_matrix: a_m.rows = a_m.columns
		do
			Result := a_m.determinant
		ensure
			result_valid: Result.is_valid
		end

	matrix_inverse (a_m: MATRIX): MATRIX
			-- Matrix inverse M^(-1) via LU decomposition
		require
			matrix_valid: a_m /= Void
			square: a_m.rows = a_m.columns
			nonsingular: a_m.determinant /= 0.0
		do
			Result := a_m.inverse
		ensure
			result_valid: Result /= Void
			inverse_property: (a_m.multiply (Result)).is_identity
		end

	matrix_condition_number (a_m: MATRIX): REAL_64
			-- Condition number κ(M) - high values indicate ill-conditioning
		require
			matrix_valid: a_m /= Void
			square: a_m.rows = a_m.columns
		do
			Result := a_m.condition_number
		ensure
			result_valid: Result.is_valid and Result >= 1.0
		end

feature -- Linear System Solving

	solve_linear_system (a_a: MATRIX; b: VECTOR_N): VECTOR_N
			-- Solve Ax = b via LU decomposition
		require
			matrix_valid: a_a /= Void
			vector_valid: b /= Void
			square: a_a.rows = a_a.columns
			compatible_dimensions: a_a.rows = b.dimension
			well_conditioned: a_a.condition_number < {REAL_64}.max_value / 2
		do
			Result := a_a.solve (b)
		ensure
			result_valid: Result /= Void
			solution_size: Result.dimension = a_a.columns
			small_residual: (a_a.multiply (Result)).subtract (b).norm <= 1e-10
		end

feature -- Eigenvalue Problems

	dominant_eigenvalue (a_m: MATRIX): REAL_64
			-- Dominant (largest) eigenvalue via power iteration
		require
			matrix_valid: a_m /= Void
			square: a_m.rows = a_m.columns
		do
			Result := a_m.dominant_eigenvalue
		ensure
			result_valid: Result.is_valid
		end

	dominant_eigenvector (a_m: MATRIX): VECTOR_N
			-- Eigenvector corresponding to dominant eigenvalue
		require
			matrix_valid: a_m /= Void
			square: a_m.rows = a_m.columns
		do
			Result := a_m.dominant_eigenvector
		ensure
			result_valid: Result /= Void
			normalized: Result.norm = 1.0
		end

feature -- Status

	is_valid: BOOLEAN = True
			-- Always valid unless system is corrupted.

end
