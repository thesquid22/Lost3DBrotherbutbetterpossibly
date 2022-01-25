open --background -a Docker
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 make VERSION=us -j4