import cv2 as cv
img=cv.imread("")

key=cv.waitKey(0)
if key==27:
    cv.destroyAllWindows()
