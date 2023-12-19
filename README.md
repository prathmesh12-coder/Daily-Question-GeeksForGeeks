# Yoga Admission Form

This project is a simple Yoga Admission Form built using React for the frontend and Node.js with Express and MongoDB for the backend. The form allows users to enroll in monthly yoga classes, providing information such as name, age, mobile number, email, and preferred batch.

## Features

- User-friendly form with validation for age, mobile number, and email.
- Backend server to handle form submissions and store data in MongoDB.
- Basic error handling and feedback to the user.

## Installation

### Frontend (React)

1. **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/yoga-admission-form.git
    ```

2. **Navigate to the frontend directory:**

    ```bash
    cd yoga-admission-form
    ```

3. **Install dependencies:**

    ```bash
    npm install
    ```

4. **Run the React app:**

    ```bash
    npm start
    ```

    The app will be accessible at `http://localhost:3000`.

### Backend (Node.js with Express and MongoDB)

1. **Navigate to the backend directory:**

    ```bash
    cd backend
    ```

2. **Install dependencies:**

    ```bash
    npm install
    ```

3. **Run the Node.js server:**

    ```bash
    node server.js
    ```

    The server will be accessible at `http://localhost:3001`.

## Database

- MongoDB is used as the database to store participant information.
- Ensure that you have MongoDB installed and running locally.

  ER Diagram for our database of yoga admission `https://drive.google.com/file/d/1JTimJG4zWqWrdoU-l3kHfiucSvnS1Nuc/view?usp=sharing`

## Additional Information

- The form includes fields for name, age, mobile number, email, and preferred batch.
- Validation is implemented to ensure age is between 18 and 65.
- Mobile number input is of type "tel" for better mobile support.
- Email input is of type "email" for basic email validation.

## Future Improvements

- Implement secure handling of sensitive information (e.g., API keys, database credentials).
- Enhance form validation and error handling.
- Add user authentication for better security.
- Implement a proper payment system.

Feel free to contribute and make this project even better!
