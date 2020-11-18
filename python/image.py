from PIL import Image, ImageFilter

# Enter image name with extension like image.jpg
originalImage = Image.open("") # Add image location

# Blur The Image
blurImage = originalImage.filter(ImageFilter.BLUR)
blurImage.show()
blurImage.save("blurImg.jpg")
