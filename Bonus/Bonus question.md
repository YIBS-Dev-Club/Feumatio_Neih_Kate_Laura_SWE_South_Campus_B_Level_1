 # 1. Create a GitHub Repository
-  Log in to your GitHub account
-  Click the + icon in the top-right corner and select New repository.
-  Give your repository a name e.g Feumatio-neih-kate-laura
-  Choose Public or Private. Public is better
- (Optional) Check "Add a README file" to initialize it immediately.
- Click Create repository. 
	## Image below

![Create repo](screenshots/create%20git%20repo.png)

 # 2. Create a New Branch (On GitHub)
-  git checkout -b your-branch-name

## Image below
![Create repo](screenshots/git%20add.png)

# 3. Clone the Specific Branch
	To bring the repository to your computer and start working specifically on that new branch:
- Click the green <> Code button and copy the HTTPS URL.
- Open your terminal or command prompt and run:
- git clone -b feature-branch https://github.com/username/repository-name.git

## Image below
![Create repo](screenshots/git%20clone.png)
# 4. Push Changes to the Branch

## Image below

![Create repo](screenshots/git%20add.png)

	Once you have made changes to your files locally, follow these steps to send them back to GitHub:
- git add .
- Commit your changes:
- git commit -m "Describe what you changed"
- git push origin feature-branch

## Image below

![Create repo](screenshots/git%20push.png)

# 5. Pull From a Branch

## Image below
![Create repo](screenshots/creating%20pull%20request.png)

    If someone else (or you, from another computer) has updated the branch on GitHub, you need to sync your local files:
- git Ensure you are on the correct branch:
- git checkout feature-branch
- Pull the updates:
- git pull origin feature-branch