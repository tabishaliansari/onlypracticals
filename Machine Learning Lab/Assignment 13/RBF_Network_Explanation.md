
# Explanation of Radial Basis Function Network Code

## Class Variables and Methods Breakdown

### 1. Initialization (`__init__` method):

The `__init__` method initializes the RBF network.

```python
class RBFNetwork:
    def __init__(self, num_centers, input_dim, sigma=1.0):
```

- **`num_centers`**: The number of radial basis functions (neurons) in the hidden layer. Each of these neurons will have its own center in the input space.
- **`input_dim`**: The dimension of the input data (in this case, 1 because we are dealing with 1D data).
- **`sigma`**: This is the width of the Gaussian function used in the RBFs. It controls how "wide" or "narrow" the basis functions are. The default value is 1.0.

```python
        self.num_centers = num_centers
        self.input_dim = input_dim
        self.sigma = sigma
```

- These three lines store the provided input arguments as instance variables, so they can be accessed later in the other methods of the class.

```python
        self.centers = np.random.uniform(-5, 5, (num_centers, input_dim))
```

- **`self.centers`**: This line initializes the RBF centers. It randomly places each center within the input space, between -5 and 5. The centers represent the positions in the input space around which each RBF will be concentrated.
  - `np.random.uniform(-5, 5, (num_centers, input_dim))`: This generates an array of random values between -5 and 5 with shape `(num_centers, input_dim)`.

```python
        self.weights = np.random.rand(num_centers, 1)
```

- **`self.weights`**: This line initializes the weights for each RBF neuron. The weights will be used to combine the RBF outputs to generate the final prediction.

---

### 2. Radial Basis Function (`rbf` method):

This method defines the Gaussian radial basis function itself. It computes how close a given input `x` is to a center using the Euclidean distance.

```python
    def rbf(self, x, center):
        return np.exp(-np.linalg.norm(x - center)**2/(2 * self.sigma**2))
```

- **`x`**: The input value for which we are calculating the RBF output.
- **`center`**: The center of the RBF.
- **`np.linalg.norm(x - center)`**: This computes the Euclidean distance between the input `x` and the RBF's center.
- **`np.exp(...)`**: The Gaussian function is applied, giving the value of the RBF for input `x`.

---

### 3. Calculate RBF Outputs (`_calculate_rbf_output` method):

This method calculates the output of each RBF for all input points in `X`.

```python
    def _calculate_rbf_output(self, X):
        rbf_outputs = np.zeros((X.shape[0], self.num_centers))
```

- **`X`**: The input data for which we want to calculate the RBF outputs. It is a 2D array with shape `(n_samples, input_dim)`.
- **`rbf_outputs = np.zeros((X.shape[0], self.num_centers))`**: This creates a zero matrix with shape `(n_samples, num_centers)`.

```python
        for i, center in enumerate(self.centers):
            rbf_outputs[:, i] = np.apply_along_axis(self.rbf, 1, X, center)
```

- **`for i, center in enumerate(self.centers)`**: Loops through each RBF center. 
- **`np.apply_along_axis(self.rbf, 1, X, center)`**: Applies the `rbf` method to each row (each input point) of `X`.

---

### 4. Training the Network (`fit` method):

This method trains the RBF network by adjusting the weights to fit the training data.

```python
    def fit(self, X, y):
        rbf_outputs = self._calculate_rbf_output(X)
```

- **`rbf_outputs = self._calculate_rbf_output(X)`**: This line calculates the RBF outputs for the training data `X`.

```python
        self.weights = np.linalg.pinv(rbf_outputs).dot(y)
```

- **`np.linalg.pinv(rbf_outputs)`**: This calculates the pseudo-inverse of the `rbf_outputs` matrix.
- **`.dot(y)`**: The weights are updated by multiplying the pseudo-inverse of the RBF outputs with the target values `y`.

---

### 5. Predicting New Values (`predict` method):

This method predicts the output for new input data `X`.

```python
    def predict(self, X):
        rbf_outputs = self._calculate_rbf_output(X)
        return rbf_outputs.dot(self.weights)
```

- **`rbf_outputs = self._calculate_rbf_output(X)`**: This calculates the RBF outputs for the input data `X`.
- **`rbf_outputs.dot(self.weights)`**: The predicted values are calculated by multiplying the RBF outputs with the learned weights.

---

### Summary of Class Variables and Methods:

- **Class Variables**:
  - `num_centers`: The number of RBF neurons.
  - `input_dim`: The dimensionality of the input space.
  - `sigma`: The spread of the Gaussian RBFs.
  - `centers`: The positions of the RBF neurons in the input space.
  - `weights`: The weights that determine how each RBF contributes to the final output.

- **Methods**:
  - `__init__`: Initializes the RBF network.
  - `rbf`: Computes the output of a Gaussian RBF given an input and a center.
  - `_calculate_rbf_output`: Computes the outputs of all RBF neurons for all input points.
  - `fit`: Trains the network by adjusting the weights to minimize prediction error.
  - `predict`: Predicts the output for new input data based on the learned weights and RBF outputs.
